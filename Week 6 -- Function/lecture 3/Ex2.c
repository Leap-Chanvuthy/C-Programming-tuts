
//factorial calculation

#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        int i , factorial = 1;
        for (i=1 ; i <= n ; i++ ) {
            factorial = factorial * i;
        }
        return factorial;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("The factorial of %d is: %d\n", num, result);
    return 0;
}
