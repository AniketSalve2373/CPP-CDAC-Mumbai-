#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    double salary;

public:
    void setData(int i, string n, double s)
    {
        id = i;
        name = n;
        salary = s;
    }

    double calculateGross()
    {
        double gross = salary;

        if (salary <= 5000)
            gross += salary * 0.10;
        else if (salary <= 10000)
            gross += salary * 0.15;
        else
            gross += salary * 0.20;

        return gross;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Gross Salary: " << calculateGross() << endl;
    }

    void update()
    {
        cout << "Enter new name: ";
        cin >> name;
        cout << "Enter new salary: ";
        cin >> salary;
    }
};

int main()
{
    Employee e;
    int choice;
    int id;
    string name;
    double salary;

    cout << "Enter employee id: ";
    cin >> id;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter salary: ";
    cin >> salary;

    e.setData(id, name, salary);

    do
    {
        cout << "\n1. Display Details";
        cout << "\n2. Update Details";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
            e.display();
        else if (choice == 2)
            e.update();

    } while (choice != 3);

    return 0;
}