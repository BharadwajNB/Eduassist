#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number = 5;
    
    // Calling the factorial function
    int result = factorial(number);

    // Printing the result
    printf("Factorial of %d is %d\n", number, result);

    return 0;
}
