// find the largest among 3 numbers
#include <stdio.h>
int maxOfThree(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int maximum = maxOfThree(num1, num2, num3);
    printf("The maximum number is: %d\n", maximum);
    return 0;
}
