// #include <stdio.h>
// struct emp
// {
//     int id;
//     char name[10];
//     struct emp * hel;
// }e1,e2;
// int main()
// {
//     struct emp e1,e2;
//     e1.hel=NULL;
//     e1.id=12345;
//     e1.name = "h";
//     // scanf("%d %s",&e1.id,&e1.name);
//     printf("%d %s",e1.id,e1.name);
// }

#include<stdio.h>
#include<string.h>
struct car
{
    int reg;
    char type[20];
    int price;
    struct car *link;
};

int main(){
    struct car c1,c2;
    c1.link=NULL;
    c1.reg=12536;
    strcpy(c1.type, "Audi");
    c1.price=20000;

    printf("%d", c1.reg);
    c1.link = NULL;
    c2.link = NULL; 
    c1.link = &c2;     
    c2.reg = 12537;
    strcpy(c2.type, "BMW");
    c2.price = 30000;

    printf("Car 1:%d %s %d\n", c1.reg, c1.type, c1.price);
    printf("Car 2:%d %s %d\n", c2.reg, c2.type, c2.price);

return 0;
}