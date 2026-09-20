
import json
import os

data_file="tasks.json"


# ============================
# Load task
# ============================
def load_tasks():
    
    """Load tasks from the json file"""
    if not os.path.exists(data_file):
        return []
    try:
        with open(data_file,"r") as file:
            return json.load(file)
        
    except json.JSONDecodeError:
        print("Warning: JSON file is corrupted!")
        return []
    except OSError:
        print("Error: Unable to read the file!")
        return []
    
    
    
def save_tasks(tasks):
    """"Save task to the json file """
    try:
        with open(data_file,"w") as file:
            json.dump(tasks,file,indent=4)

    except OSError:
        print("Error: Unable to save tasks!") 
        
# ==============================
# ADD TASK
# ==============================
def add_tasks():
    task=input("Enter the task").strip()
    
    if not task:
        print("It is already empty ")
        return
    
    tasks=load_tasks()
    
    new_task={
        "task":task,
        "status":"pending"
    }  
    
    tasks.append(new_task)
    save_tasks(tasks)
    
    print("Taks added Successfully!")
    
# ==============================
# VIEW TASKS
# ==============================    
def view_tasks():
    """Displays tasks using enumerate() for Pythonic indexing."""
    
    tasks=load_tasks()
    if not tasks:
        print("It is already empty")
        return []
    
    print("================View tasks=================")
    for index,task in enumerate(tasks):
        print(f"{index+1}",
              f"{task['task']}",
              f"[{task['status']}]"
              )
        
        
    print("============================================")
    
# ==============================
# MARK TASK DONE
# ==============================   
    
def mark_tasks():
    tasks=load_tasks()
    
    if not tasks:
        print("It is already empty")
        return 
    
    view_tasks()
    try:
        task_num=int(input("Enter the task number "))
        
        if task_num>=1 and task_num<=len(tasks):
            task_num-=1
            tasks[task_num]['status']='Done'
            save_tasks(tasks)
            
            print("Task marked as done successfully!")
            
        else:
            print("Invalid task number!")
            
    except ValueError:
        print("Please enter a valid number!")
             
            
           
# ==============================
# DELETE TASK
# ==============================       
def delete_tasks():
    tasks=load_tasks()
    
    if not tasks:
        print("It is already emtpy ")
        return 
    view_tasks()
   
    
    try:
         task_num=int(input("Enter the task number you want to delete"))
         if task_num>=1 and task_num<=len(tasks):
             task_num-=1
             removed=tasks.pop(task_num)
             save_tasks(tasks)
             print(f"Task '{removed['task']}' deleted successfully.")
             
         else:
             print("Invalid task number!")
             
             
    except ValueError:
        print("Please enter a valid number!")




def main():
    while True:
        
        
        print("\n========== TO-DO MANAGER ==========")
        print("1. Add Task")
        print("2. View Tasks")
        print("3. Mark Task as Done")
        print("4. Update Task")
        print("5. Delete Task")
        print("6. Clear All Tasks")
        print("7. Exit")
        print("===================================")    
        
        choice = int( input("Enter your choice: "))
        
        if choice == 1:
            add_tasks()

        elif choice == 2:
            view_tasks()

        elif choice == 3:
             mark_tasks()
             
        elif choice == 4:
            delete_tasks()
        elif choice == 5:
            print("\nExiting program. All changes saved!")
            break
        else:
            print("Invalid choice. Please pick between 1 and 5.")

        
# Standard Python entry point
if __name__ == "__main__":
    main()              
    
    
        
     
    

        
    

        
