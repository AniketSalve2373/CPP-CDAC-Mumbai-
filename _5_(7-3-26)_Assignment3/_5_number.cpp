#include <iostream>
using namespace std;

class Inspector5;

class Number5 {

    int value;

public:

    Number5(int v=0) {
        value=v;
    }

    friend bool operator>(Number5 a,Number5 b);

    friend class Inspector5;

    Number5& operator++() {

        ++value;
        return *this;
    }

    Number5 operator++(int) {

        Number5 temp=*this;
        value++;
        return temp;
    }

    Number5& operator=(const Number5 &n) {

        value=n.value;
        return *this;
    }

    void display() {
        cout<<value<<endl;
    }
};

bool operator>(Number5 a,Number5 b) {
    return a.value>b.value;
}

class Inspector5 {

public:

    void show(Number5 n) {
        cout<<"Private Value = "<<n.value<<endl;
    }
};

int main() {

    Number5 n1(10),n2(20);

    ++n1;
    n1.display();

    n1++;
    n1.display();

    if(n2>n1)
        cout<<"n2 is greater\n";

    Inspector5 i;
    i.show(n1);
}