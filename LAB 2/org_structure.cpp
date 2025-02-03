#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int employee_id;
    string name;
    double salary;
};

struct Organization {
    string organisation_name;
    string organisation_number;
    Employee emp;
};

int main() {
    Organization org;

    // Assigning values
    org.organisation_name = "NU-Fast";
    org.organisation_number = "NUFAST123ABC";
    org.emp.employee_id = 127;
    org.emp.name = "Linus Sebastian";
    org.emp.salary = 400000;

    // Display output
    cout << "The size of structure Organization: " << sizeof(Organization) << endl;
    cout << "Organisation Name: " << org.organisation_name << endl;
    cout << "Organisation Number: " << org.organisation_number << endl;
    cout << "Employee ID: " << org.emp.employee_id << endl;
    cout << "Employee Name: " << org.emp.name << endl;
    cout << "Employee Salary: " << org.emp.salary << endl;

    return 0;
}
