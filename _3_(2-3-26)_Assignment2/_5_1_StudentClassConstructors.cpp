#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:

    // default constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
    }

    // parameterized constructor
    Student(int r,string n,float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    // constructor using this pointer
    Student(int rollNo,string name,float marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void display()
    {
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Student s1;
    Student s2(1,"Aniket",85.5);
    Student s3(2,"Rahul",90);

    cout<<"Student 1\n";
    s1.display();

    cout<<"\nStudent 2\n";
    s2.display();

    cout<<"\nStudent 3\n";
    s3.display();

    return 0;
}