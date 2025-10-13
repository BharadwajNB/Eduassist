#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}