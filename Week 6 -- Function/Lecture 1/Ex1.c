#include <stdio.h>
#include <math.h>
#include "function.hpp"

int main() {
    int option;
    while (option != 3) {
        printf("1/ Solve equation\n");
        printf("2/ Summation\n");
        printf("3/ Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                double a, b, c;
                printf("Enter coefficients a, b, and c: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                solveQuadraticEquation(a, b, c);
                break;
            case 2:
                int num1, num2;
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                summation(num1, num2);
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}
