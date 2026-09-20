

import json 
import os
CATEGORIES = [
    "Food",
    "Transport",
    "Shopping",
    "Bills"
]

data_file='expenses.json'

def load_expenses():
    """Loads expenses from the json file"""
    if not os.path.exists(data_file):
        return []
    try:
        with open(data_file,'r') as file:
            return json.load(file)
    except json.JSONDecodeError:
        print("Warning: JSON file is corrupted!")
        return []
    except OSError:
        print("Error: Unable to read the file!")
        return []
    
    
def save_expenses(expenses):
    try:
        with open(data_file,'w') as file:
           json.dump(expenses,file,indent=4)
    except OSError:
        print("Error: Unable to read the file!")
        
        
def get_category():
    print("\nAvailable Categories:")

    for index, category in enumerate(CATEGORIES):
        print(f"{index + 1}. {category}")

    try:
        choice = int(input("Choose category: "))

        if choice >= 1 and choice <= len(CATEGORIES):
            return CATEGORIES[choice - 1]

        print("Invalid category!")

    except ValueError:
        print("Please enter a valid number!")

    return None
    
def add_expenses():
    expense_title=input("Enter the Expense Title").strip()
    if not expense_title:
        print("First you have to enter the Expense Title")
        return 
    try:
        amount=float(input("Enter the Amount"))
    except ValueError:
        print("Enter the correct value")
        return 
    category=get_category()
    if not category:
        return 
    date=input("Enter the date ")
        
    expenses=load_expenses()
    new_expenses={
        'expense_title':expense_title,
        'amount':amount,
        'category': category,
        'date':date
        
    }
    expenses.append(new_expenses)
    save_expenses(expenses)
    print("Expenses are added Successfully!")
    
    
def view_expenses():
    expenses=load_expenses()
    if not expenses:
        print("It is empty")
        return 
    print("================View Expense LIST=================")
    for index,expense in enumerate(expenses):
        print(
            f'{index+1}',
            f"{expense['expense_title']}",
            f"RS. {expense['amount']}",
            f"{expense['category']}",
            f"{expense['date']}"
            
        )
    print("===============================================")
    
    
def delete_expense():
    expenses=load_expenses()
    if not expenses:
        print("It is already empty ")
        return 
    
    try:
        del_num=int(input("Enter the expense number you want to delete"))
        
        if del_num>=1 and del_num<=len(expenses):
            del_num-=1
            remove=expenses.pop(del_num)
            save_expenses(expenses)
            print(f"Expense '{remove['expense_title']}' deleted successfully.")
        else:
            print("Invalid number ")  
            
    
    except ValueError:
        print("Please enter a valid number ")
        return 
    
    
    
def edit_expense():
    expenses = load_expenses()

    if not expenses:
        print("No expenses found.")
        return

    view_expenses()
    
    try:
        expense_num = int(input("Enter the expense number: "))

        if expense_num >= 1 and expense_num <= len(expenses):

            expense_num -= 1

            expense = expenses[expense_num]

            print("\nLeave blank if you don't want to change a value.")

            new_title = input(
                f"Enter new title [{expense['expense_title']}]: "
            ).strip()

            new_amount = input(
                f"Enter new amount [{expense['amount']}]: "
            ).strip()

            new_category = input(
                f"Enter new category [{expense['category']}]: "
            ).strip()

            new_date = input(
                f"Enter new date [{expense['date']}]: "
            ).strip()

            if new_title:
                expense["expense_title"] = new_title

            if new_amount:
                expense["amount"] = float(new_amount)

            if new_category:
                expense["category"] = new_category

            if new_date:
                expense["date"] = new_date

            save_expenses(expenses)

            print("Expense updated successfully!")

        else:
            print("Invalid expense number!")

    except ValueError:
        print("Please enter a valid number!")
        

            
            
def daily_spending():
    expenses = load_expenses()

    if not expenses:
        print("No expenses found.")
        return

    date = input("Enter date (YYYY-MM-DD): ").strip()

    total = 0

    for expense in expenses:
        if expense["date"] == date:
            total += expense["amount"]

    print(f"Total spending on {date}: Rs. {total}")
    
def summary_report():
    expenses = load_expenses()

    if not expenses:
        print("No expenses found.")
        return

    total = 0

    category_totals = {}

    for expense in expenses:

        amount = expense["amount"]
        category = expense["category"]

        total += amount

        if category not in category_totals:
            category_totals[category] = 0

        category_totals[category] += amount

    print("\n========== EXPENSE SUMMARY ==========")

    print(f"Total Spending: Rs. {total}")

    print("\nCategory-wise Spending:")

    for category, amount in category_totals.items():
        print(f"{category}: Rs. {amount}")

    print("======================================")
def main():

    while True:

        print("\n========== EXPENSE TRACKER ==========")
        print("1. Add Expense")
        print("2. View Expenses")
        print("3. Edit Expense")
        print("4. Delete Expense")
        print("5. Daily Spending")
        print("6. Monthly Spending")
        print("7. Summary Report")
        print("8. Exit")
        print("=====================================")

        try:
            choice = int(input("Enter your choice: "))

            if choice == 1:
                add_expenses()

            elif choice == 2:
                view_expenses()

            elif choice == 3:
                edit_expense()

            elif choice == 4:
                delete_expense()

            elif choice == 5:
                daily_spending()

           

            elif choice == 6:
                summary_report()

            elif choice == 8:
                print("\nExiting Expense Tracker...")
                print("Goodbye! 👋")
                break

            else:
                print("Invalid choice! Please choose between 1 and 8.")

        except ValueError:
            print("Please enter a valid number!")
            
            
            
if __name__ == "__main__":
    main()