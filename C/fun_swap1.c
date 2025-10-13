#include <stdio.h>
int main()
{
    int a=10, b=20;
    printf("before swaping a and b values :%d %d\n",a,b);
    swap(a,b);
}
swap(int x, int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("after swaping the values:%d %d", x,y);
}