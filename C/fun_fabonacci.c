#include<stdio.h>
int fabonacci(int n);
int main(){
    int n;
    int result;
    printf("Enter a number:");
    scanf("%d", &n);
    fabonacci(n);
    return 0;
}
int fabonacci(int n){
    int first = 0, second = 1, next;
    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}