#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double salary;

public:
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() const {
        cout << "ID: " << empID << " | Name: " << empName << " | Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    // Dynamically allocate array of Employee objects
    Employee* employees = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        employees[i].acceptDetails();
    }

    cout << "\n--- All Employee Details ---" << endl;
    for (int i = 0; i < n; i++) {
        employees[i].displayDetails();
    }

    delete[] employees;
    employees = nullptr;

    return 0;
}