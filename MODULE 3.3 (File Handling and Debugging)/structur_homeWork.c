#include <stdio.h>
#include <string.h>
struct employee
{
    int ID, Age, Salary;
    char Name[10], Department[10];
};
int main()
{
    int num;
    printf("Enter no of employee: ");
    scanf("%d", &num);

    struct employee emp[num];

    for (int i = 0; i < num; i++)
    {
        printf("\nEnater Emplyee Info as ID, Department, Name, Age, Salary\n");
        scanf("%d %s %s %d %d", &emp[i].ID, emp[i].Department, emp[i].Name, &emp[i].Age, &emp[i].Salary);
        printf("\n");
        printf("Employeed %d detail:\n", i + 1);
        printf("\nID =%d,\nDepartment= %s,\nName= %s,\nAge= %d,\nSalary= %d", emp[i].ID, emp[i].Department, emp[i].Name, emp[i].Age, emp[i].Salary);
        printf("\n");
    }
    return 0;
}
