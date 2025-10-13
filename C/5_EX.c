#include <stdio.h>
int main()
{
    int p,t,r, SI,CI;
    printf("the the value of p t r: ");
    scanf("%d %d %d", &p ,&t ,&r );
    SI = (p * t * r ) / 100;
    CI =  (p * (1 + r / 100 ) * 100 * t - p);
    // (p *(1 + r/n)* n* t - p)
    printf("Simple Interest: %d", SI);
    printf("Compound interest: %d", CI);

}