// // #include<stdio.h>
// // //declaration
// // void fun();
// // int main(){
// //     int a = 10;
// //     int b = 20;
// //     fun();
// //     return 0;
// // }
// // void fun(){
// //     int a,b,temp;
// //     temp=a;
// //     a=b;
// //     b=temp;
// //     printf("%d %d",a,b);
// //     return 0;
// // } 



// #include<stdio.h>

// int main(){
//     fun();
//     int res;
//     res=fun();

//     return 0;
// }



// #include <stdio.h>
// // Function to swap two numbers
// void swap(int a, int b) {
//     int temp;
//     temp = a;
//     a = b;   
//     b = temp; 
// }

// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
//     swap(&num1, &num2);
//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
//     return 0;
// }





#include<stdio.h>
int swap(int a,int b);

int main(){
    int a =10,b=20;
    printf("Before swapping: a = %d,  b = %d\n", a, b); 
    swap(a,b);
    return 0;
}
int swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("after swapping %d %d",a,b);
}