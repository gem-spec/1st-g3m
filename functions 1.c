#include <stdio.h>

float SI(float p, float r, float t); // Function prototype returning float

int main() {
    float x, y, z, result;

    printf("Enter the Principle, Rate & Time:\n");
    scanf("%f%f%f", &x, &y, &z);

    result = SI(x, y, z);
    printf("Required output is %.2f\n", result); // Prints with 2 decimal places

    return 0;
}

float SI(float p, float r, float t) {
    float interest;
    interest = (p * r * t) / 100.0;

    return interest;
}