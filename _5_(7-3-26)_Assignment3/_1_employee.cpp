#include <iostream>
using namespace std;

class Employee1 {
    int id;
    string name;
    mutable int accessCount;

public:

    Employee1(int i, string n) {
        id = i;
        name = n;
        accessCount = 0;
    }

    Employee1(const Employee1 &e) {
        id = e.id;
        name = e.name;
        accessCount = e.accessCount;
        cout<<"User Defined Copy Constructor Called\n";
    }

    const void display() {
        accessCount++;
        cout<<"ID: "<<id<<" Name: "<<name<<" AccessCount: "<<accessCount<<endl;
    }
};

int main() {

    Employee1 e1(101,"Aniket");

    e1.display();
    e1.display();
    e1.display();

    Employee1 e2 = e1;

    cout<<"\nDisplaying e2\n";
    e2.display();

}