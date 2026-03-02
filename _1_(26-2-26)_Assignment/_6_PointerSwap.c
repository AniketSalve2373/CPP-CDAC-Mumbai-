#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;

    int *px = &x;
    int *py = &y;
    int *pz = &z;

    printf("Before Swap:\n");
    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);
    printf("Addresses:\n");
    printf("px = %p, py = %p, pz = %p\n", px, py, pz);

    // Swap values of x and z using only dereferencing
    int temp = *px;
    *px = *pz;
    *pz = temp;

    printf("\nAfter Swap (x and z swapped):\n");
    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);
    printf("Addresses (unchanged):\n");
    printf("px = %p, py = %p, pz = %p\n", px, py, pz);

    return 0;
}