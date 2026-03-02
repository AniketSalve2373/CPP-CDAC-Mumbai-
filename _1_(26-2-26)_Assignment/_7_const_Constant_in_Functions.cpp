#include <iostream>
#include <iomanip>
using namespace std;

const float PI = 3.14159f;

float circleArea(float radius) {
    return PI * radius * radius;
}

float circlePerimeter(float radius) {
    return 2 * PI * radius;
}

int main() {
    float radius = 7.0f;

    cout << fixed << setprecision(4);
    cout << "Area = " << circleArea(radius) << endl;
    cout << "Perimeter = " << circlePerimeter(radius) << endl;

    PI = 3.0f;
    
//     _7_const_Constant_in_Functions.cpp: In function 'int main()':
// _7_const_Constant_in_Functions.cpp:22:10: error: assignment of read-only variable 'PI'
//      PI = 3.0f;   // error: assignment of read-only variable 'PI'
//           ^~~~
// PS D:\CDAC PGCP-AC\CPP\Assignment\_1_(26-2-26)_Assignment> 

    return 0;
}