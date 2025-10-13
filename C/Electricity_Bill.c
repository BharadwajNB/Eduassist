#include <stdio.h>

int main() {
    int units;
    printf("Enter the number of units: ");
    scanf("%d", &units);

    if (units < 1) return printf("Please enter valid units\n"), 1;

    float amount = (units <= 30) ? units * 2.5 :
                   (units <= 70) ? 30 * 2.5 + (units - 30) * 4 :
                   (units <= 150) ? 30 * 2.5 + 40 * 4 + (units - 70) * 6 :
                   (units <= 250) ? 30 * 2.5 + 40 * 4 + 80 * 6 + (units - 150) * 6 :
                                    30 * 2.5 + 40 * 4 + 80 * 6 + 100 * 8 + (units - 250) * 8;

    printf("Electricity bill = %.2f\n", amount);
    return 0;
}

// #include <stdio.h>

// int main() {
//     int units;
//     float amount = 0.0; // Initialize amount
//     printf("Enter the number of units: ");
//     scanf("%d", &units);

//     if (units >= 1 && units <= 30) {
//         amount = units * 2.5;
//     }
//     else if (units >= 31 && units <= 70) {
//         amount = 30 * 2.5 + (units - 30) * 4.00;
//     }
//     else if (units >= 71 && units <= 150) {
//         amount = 30 * 2.5 + 40 * 4.00 + (units - 70) * 4.00; // Corrected base charge
//     }
//     else if (units >= 151 && units <= 250) {
//         amount = 30 * 2.5 + 40 * 4.00 + 80 * 4.00 + (units - 150) * 6.00; // Corrected base charge
//     }
//     else if (units > 250) {
//         amount = 30 * 2.5 + 40 * 4.00 + 80 * 4.00 + 100 * 6.00 + (units - 250) * 8.00; // Corrected base charge
//     }
//     else {
//         printf("Please enter valid units");
//         return 1; // Exit the program with an error code
//     }

//     printf("Electricity bill = %.2f\n", amount);
//     return 0; // Exit the program successfully
// }
