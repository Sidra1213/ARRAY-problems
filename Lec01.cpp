#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Not set";
        age = 0;
    }

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;                // Calls default constructor
    Student s2("Ali", 20);     // Calls parameterized constructor

    s1.displayInfo();          // Output: Name: Not set, Age: 0
    s2.displayInfo();          // Output: Name: Ali, Age: 20

    return 0;
}
