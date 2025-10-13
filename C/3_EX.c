///me
#include <stdio.h>
int main()
{
    int F,C;
   printf("Enter the value of F: ");
   scanf("%f",&F);
    printf("Enter the value of C: ");
    scanf("%f", &C);
   C = ((F - 32.0) * 5.0 / 9.0);
   F = ((C*9.0/5.0)+32.0);
   printf("Celsius:%.2f\n Farhenheit: %.2f", C, F);
   return 0;
}

//madhav
// #include<stdio.h>
// int main()
// {
// float f,c;
// printf("Enter the value of F:");
// scanf("%f",&f);
// c =  (f-32.0)*(5.0/9.0);
// printf("The temperature in celsius is %f\n",c);
// printf("Enter the value of celsius:");
// scanf("%f",&c);
// f = (c*9.0/5.0)+32.0;
// printf("The temperature in farhenheit is %f",f);
// return 0;
// }


// bug debegur
// #include <stdio.h>
// int main() {
//     float F, C;
//     printf("Enter the value of F: ");
//     scanf("%f", &F);
//     printf("Enter the value of C: ");
//     scanf("%f", &C);  
//     // Correctly convert Fahrenheit to Celsius
//     C = (F - 32.0) * 5.0 / 9.0;
//     // Correctly convert Celsius to Fahrenheit
//     F = (C * 9.0 / 5.0) + 32.0;
//     printf("Celsius: %f\nFahrenheit: %f\n", C, F);
//     return 0;
// }
