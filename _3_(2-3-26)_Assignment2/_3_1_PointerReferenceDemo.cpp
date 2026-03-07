#include <iostream>
using namespace std;

int main()
{
    int value = 10;

    int *ptr = &value;   // pointer
    int &ref = value;    // reference

    cout << "Original value: " << value << endl;

    // modify using pointer
    *ptr = 20;
    cout << "After pointer change: " << value << endl;

    // modify using reference
    ref = 30;
    cout << "After reference change: " << value << endl;

    return 0;
}