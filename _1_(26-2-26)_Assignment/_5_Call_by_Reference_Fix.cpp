#include <iostream>
using namespace std;

void doubleIt(int &n) {
    n = n * 2;
    cout << "Inside doubleIt: " << n << endl;
}

int main() {

    int num = 7;

    cout << "Before function call: " << num << endl;
    doubleIt(num);
    cout << "After function call: " << num << endl;

    return 0;
}