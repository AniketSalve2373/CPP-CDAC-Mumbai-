#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float marks;
    char grade;

public:
    void setName(string n)
    {
        name = n;
    }

    void setRoll(int r)
    {
        rollNumber = r;
    }

    void setMarks(float m)
    {
        marks = m;
    }

    string getName()
    {
        return name;
    }

    int getRoll()
    {
        return rollNumber;
    }

    float getMarks()
    {
        return marks;
    }

    char getGrade()
    {
        return grade;
    }

    void calculateGrade()
    {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else if (marks >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Student s;
    int choice;

    do
    {
        cout << "\n1. Accept Information";
        cout << "\n2. Display Information";
        cout << "\n3. Calculate Grade";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string n;
            int r;
            float m;

            cout << "Enter name: ";
            cin >> n;
            cout << "Enter roll number: ";
            cin >> r;
            cout << "Enter marks: ";
            cin >> m;

            s.setName(n);
            s.setRoll(r);
            s.setMarks(m);
        }
        else if (choice == 2)
        {
            s.display();
        }
        else if (choice == 3)
        {
            s.calculateGrade();
            cout << "Grade calculated.\n";
        }

    } while (choice != 4);

    return 0;
}