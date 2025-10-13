// Read student name and marks from the command line and display the student details along with the total 
#include <stdio.h>
struct student
{
    char name[20];
    int marks;
};
int main(int argc, char *argv[])
{
    struct student s;
    if (argc != 3)
    {
        printf("Usage: %s <name> <marks>\n", argv[0]);
        return 1;
    }
    strcpy(s.name, argv[1]);
    s.marks = atoi(argv[2]);
    printf("Name: %s\n", s.name);
    printf("Marks: %d\n", s.marks);
    return 0;
}