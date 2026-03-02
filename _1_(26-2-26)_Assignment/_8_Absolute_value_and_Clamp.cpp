#include <iostream>
using namespace std;

int absolute(int n) {
    return (n < 0) ? -n : n;
}

int clamp(int val, int lo, int hi) {
    if (val < lo)
        return lo;
    else if (val > hi)
        return hi;
    else
        return val;
}

int main() {

    int val, lo, hi;

    // Case 1
    val = -15; lo = -10; hi = 10;
    cout << "For values: " << val << ", " << lo << ", " << hi << endl;
    cout << "Absolute = " << absolute(val) << endl;
    cout << "Clamp = " << clamp(val, lo, hi) << endl << endl;

    // Case 2
    val = 0; lo = -10; hi = 10;
    cout << "For values: " << val << ", " << lo << ", " << hi << endl;
    cout << "Absolute = " << absolute(val) << endl;
    cout << "Clamp = " << clamp(val, lo, hi) << endl << endl;

    // Case 3
    val = 25; lo = -10; hi = 10;
    cout << "For values: " << val << ", " << lo << ", " << hi << endl;
    cout << "Absolute = " << absolute(val) << endl;
    cout << "Clamp = " << clamp(val, lo, hi) << endl << endl;

    // Case 4
    val = -3; lo = 0; hi = 5;
    cout << "For values: " << val << ", " << lo << ", " << hi << endl;
    cout << "Absolute = " << absolute(val) << endl;
    cout << "Clamp = " << clamp(val, lo, hi) << endl;

    return 0;
}