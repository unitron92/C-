#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent employee information
struct Employee {
    int employee_id;
    string name;
    double salary;
};

int main() {
    const int numEmployees = 5;

    // Declare an array of structures to hold employee information
    Employee employeeArray[numEmployees];

    // Initialize the array of structures with employee data
    employeeArray[0] = {101, "John Doe", 55000.0};
    employeeArray[1] = {102, "Jane Smith", 60000.0};
    employeeArray[2] = {103, "Bob Johnson", 50000.0};
    employeeArray[3] = {104, "Alice Brown", 62000.0};
    employeeArray[4] = {105, "Eva White", 58000.0};

    // Declare a pointer to an array of structures
    Employee* employeePtr = employeeArray;

    // Display the list of employees and their information using the pointer
    cout << "Employee List (Using Pointer to Array):\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee ID: " << employeePtr->employee_id << endl;
        cout << "Name: " << employeePtr->name << endl;
        cout << "Salary: $" << employeePtr->salary << endl;
        cout << endl;

        // Move the pointer to the next employee in the array
        employeePtr++;
    }

    return 0;
}
