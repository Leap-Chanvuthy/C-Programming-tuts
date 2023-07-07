#include <stdio.h>
#include <math.h>

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant, root1, root2;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the value of the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // One real root (both roots are the same)
        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root = %.2lf\n", root1);
    } else {
        // Complex roots (imaginary roots)
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

void summation(int a, int b) {
    int c = a + b;
    printf("Summation is: %d\n", c);
}

