// Create a C++ program to model a Student Result System. 

// Create a base class Student that contains: 
// 1. A protected data member rollNo 
// 2. A constructor that initializes rollNo 
// 3. A virtual function display() that prints the roll number. 

// Create a derived class Result that: 
// 1. Inherits from Student 
// 2. Has an additional data member marks 
// 3. Uses a constructor to initialize both rollNo and marks Overrides the display() function to print both roll number and marks. 

// In the main() function: 
// 1. Create an object of the Result class. 
// 2. Use a base class pointer to refer to the derived object (Upcasting). 
// 3. Call the display() function using the base class pointer.

#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    int rollNo;

public:
    // Constructor
    Student(int r) {
        rollNo = r;
    }

    // Virtual function
    virtual void display() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived class
class Result : public Student {
private:
    int marks;

public:
    // Constructor
    Result(int r, int m) : Student(r) {
        marks = m;
    }

    // Overriding display function
    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};


int main() {

    // Create object of Result
    Result r1(101, 85);

    // Base class pointer (Upcasting)
    Student *ptr;
    ptr = &r1;

    // Call display using base pointer
    ptr->display();

    return 0;
}