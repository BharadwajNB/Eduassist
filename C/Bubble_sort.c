#include <stdio.h>
#include <math.h>

int main() {
  
    int a[10] = {20, 50, -3, 15, 9, -6, 1, 4, 18, 23};
    int n = 10;  
    int i, j, temp;
    printf("Original Value: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i = 0; i < n-1; i++) {
       
        for(j = 0; j < n-1-i; j++) {
            
            if(a[j] > a[j+1]) {
                
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; 
            }
        }
    }
    printf("Order Wise Value: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
