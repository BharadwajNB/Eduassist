// Copy one structure variable to another structue of same type
#include<stdio.h>
#include<string.h>
struct person {
    char name[20];
    int age;
};
int main(){
    struct person p1 = {"John", 25};
    struct person p2 ;
    strcpy(p2.name, "Jane");
    p2.age = 30;
    printf("%s %d\n", p2.name, p2.age);
    return 0;
}

// #include <stdio.h>
// struct book
// {
//     char title[20];
//     char author[20];
//     int price;
// };
// struct publisher
// {
//     char pubname[20];
//     char pubaddress[20];
//     int pubphone;
//     char pubmail[20];
//     char pubid[20];
// };
// int main()
// {
//       struct book b1 = {"C programming", "Aarav", 100.00};
//     struct book b2;
//     b2 = b1;
//     printf("Book 2\n");
//     printf("Title: %s\n", b2.title);
//     printf("Author: %s\n", b2.author);
//     printf("Price: %d\n", b2.price);
//     return 0;
// }

