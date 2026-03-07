#include <iostream>
using namespace std;

class Employee
{
private:
    const int employeeId;
    string name;
    float salary;

public:
    // Constructor with initializer list
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s)
    {
    }

    // Function to display employee details
    void displayDetails()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp1(101, "Aniket", 50000);

    emp1.displayDetails();

    return 0;
}