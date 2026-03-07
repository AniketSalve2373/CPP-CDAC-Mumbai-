#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *arr = (int*) malloc(5 * sizeof(int));

    cout << "Enter 5 numbers:\n";

    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }

    cout << "Values are:\n";

    for(int i=0;i<5;i++)
    {
        cout << arr[i] << " ";
    }

    free(arr);

    return 0;
}