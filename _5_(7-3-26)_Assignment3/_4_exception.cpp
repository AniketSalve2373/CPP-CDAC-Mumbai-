#include <iostream>
using namespace std;

class DivideByZero4 {};

void divide(int a,int b) throw(DivideByZero4) {

    if(b==0)
        throw DivideByZero4();

    cout<<"Result = "<<a/b<<endl;
}

int main() {

    try {

        try {

            divide(10,0);

        }

        catch(DivideByZero4) {

            cout<<"Inside inner catch\n";
            throw;

        }

    }

    catch(DivideByZero4) {

        cout<<"Handled in outer catch\n";

    }

}