#include <iostream>
using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {

    minVal = a;
    if (b < minVal)
        minVal = b;
    if (c < minVal)
        minVal = c;

    maxVal = a;
    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;
}

int main() {

    int num1 = 10;
    int num2 = 25;
    int num3 = 5;

    int minimum, maximum;

    findMinMax(num1, num2, num3, minimum, maximum);

    cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;

    return 0;
}