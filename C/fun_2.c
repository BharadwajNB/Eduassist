#include <stdio.h>
int main()
{
    fun();
    int res;
    res=fun();
    return res;
}

fun()
{
    printf("Welcome");
    return 0;
}