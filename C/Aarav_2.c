#include <stdio.h>
int main()
{
    int a[10],i,key,n;
    printf("\nenter size of array");

    scanf("%d", &n);
    printf("\nenter the elements one by one: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("element are:%d\n", a[i]);
    }
    printf("enter search key");
    scanf("%d", &key);
    for (i=0; i<n; i++);
    {
        if (key == a[i])
        {
            printf("\nelement found at %d", a[i]);
          
        }
        else {
            printf("\n please enter the correct element");
        }
        
    }
    return 0;
}