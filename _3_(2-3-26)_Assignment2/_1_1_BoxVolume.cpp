#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:

    // Parameterized constructor
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    // setDimensions using this pointer
    void setDimensions(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // function to calculate volume
    int volume()
    {
        return length * width * height;
    }
};

int main()
{
    // initialization using constructor
    Box box1(2,3,4);

    cout << "Volume after constructor initialization: " << box1.volume() << endl;

    // assignment using function
    box1.setDimensions(5,6,7);

    cout << "Volume after setDimensions(): " << box1.volume() << endl;

    return 0;
}