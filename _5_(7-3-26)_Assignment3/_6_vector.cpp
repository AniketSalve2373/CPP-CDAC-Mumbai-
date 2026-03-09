#include <iostream>
using namespace std;

class Vector6 {

    int *arr;
    int size;

public:

    Vector6(int s) {

        size=s;
        arr=new int[size];
    }

    int& operator[](int index) {

        return arr[index];
    }

    int operator()() {

        int sum=0;

        for(int i=0;i<size;i++)
            sum+=arr[i];

        return sum;
    }

    ~Vector6() {

        delete[] arr;
    }
};

int main() {

    Vector6 v(5);

    for(int i=0;i<5;i++)
        v[i]=i*10;

    v[2]=50;

    cout<<"Sum = "<<v()<<endl;
}