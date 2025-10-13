#include <stdio.h>
int main()
{
    int a, p, r, n, t;
   printf(" Please Enter the Value p : ");
   printf("\n Please Enter the Value r : ");
   printf(" \nPlease Enter the Value n : ");
   printf(" \nPlease Enter the Value t : ");
   scanf("%d ,%d, %d,  %d", &p, &r, &n, &t);

   a = (p *(1 + r/n)* n* t - p);
   printf("Compound Interest %d", a);
   return 0;
   } 