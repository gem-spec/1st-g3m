#include <stdio.h>

int SI(int p, int r, int t); // Function prototype

int main() {
    int x, y, z, result;

    printf("Enter the Principle, Rate & Time.\n");
    scanf("%d%d%d", &x, &y, &z); 
    result = SI(x, y, z); 
    printf("Required output is %d\n", result);

    return 0;
}

int SI(int p, int r, int t) {
    float interest;
    interest = p * r / 100 * t;

    return interest;
}