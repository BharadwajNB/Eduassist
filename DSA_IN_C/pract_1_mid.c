#include <stdio.h>
struct student
{
    char name[20];
    int age;
    float marks;
};
    int main()
{
    struct student s1;

    printf("Enter the Name: ");
    scanf("%s",s1.name);
    printf("Enter your age: ");
    scanf("%d",&s1.age);
    printf("Enter the Marks: ");
    scanf("%f",&s1.marks);
    printf("\n Student details:\nName:%s \nAge:%d \nMarks:%f", s1.name,s1.age,s1.marks);
}