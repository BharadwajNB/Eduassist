// write a program to search elements in a array by using linear search
#include<stdio.h>
int element(int a[10],int n,int key)
{
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int  a[10],n,key, i;
    printf("Enter n no. of elements");
    scanf("%d",&n);
    printf("\nEnter the elements one by one");
    for(i=0;i<n;i++ ){
        scanf("%d",&a[i]);
    }
    printf("\nEnter search key ");
    scanf("%d",&key);

    int position = element(a, n, key);

    if (position == -1){
        printf("Element not found");
    }
    else {
        printf("Element found at position %d",position+1);
    }
}