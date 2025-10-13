#include<stdio.h>
int main()
{
    int a[100],size,i;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter array element:\t");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

}