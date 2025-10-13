#include <stdio.h>
struct employee
{
    char empname[20];
    int empid;
    int empsalary;
    char empaddress[20];
    char empmail[20];
    int empphone;
    char empdept[20];
};
 int main()
 {
        int n, totalSalary = 0;
        float average;
        printf("Enter the number of employees: ");
        scanf("%d", &n);
        struct employee employees[n];
        for (int i = 0; i < n; i++) {
            printf("Enter name, id, salary, address, mail, phone, and department for employee %d: ", i + 1);
            scanf("%s %d %d %s %s %d %s", employees[i].empname, &employees[i].empid, &employees[i].empsalary, employees[i].empaddress, employees[i].empmail, &employees[i].empphone, employees[i].empdept);
            totalSalary += employees[i].empsalary;
        }
        average = (float)totalSalary / n;
        printf("Total Salary: %d\n", totalSalary);
        printf("Average Salary: %.2f\n", average);
        return 0;

 }