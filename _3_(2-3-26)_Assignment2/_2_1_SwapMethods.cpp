#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << "Before swap: x=" << x << " y=" << y << endl;

    swapByValue(x,y);
    cout << "After swapByValue: x=" << x << " y=" << y << endl;

    swapByAddress(&x,&y);
    cout << "After swapByAddress: x=" << x << " y=" << y << endl;

    swapByReference(x,y);
    cout << "After swapByReference: x=" << x << " y=" << y << endl;

    return 0;
}