#include <stdio.h>

int factorial(int n);

int main() {
    int number;
    int result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(number);
        printf("Factorial of %d = %d\n", number, result);
    }
    return 0;
}
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! = 1
    } else {
        return n *factorial(n - 1); // Recursive case: n! = n * (n-1)
    }
}