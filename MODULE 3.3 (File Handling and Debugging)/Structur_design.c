#include <stdio.h>
#include <string.h>
struct employee
{
    int ID, Age, Salary;
    char Name[100], Department[100];
};
int main()
{
    int num;
    printf("Enter number of employee: ");
    scanf("%d", &num);

    struct employee emp[num];
    printf("\nEnater Emplyee Info as ID, Department, Name, Age, Salary\n");
    for (int i = 0; i < num; i++)
    {

        scanf("%d %s %s %d %d", &emp[i].ID, emp[i].Department, emp[i].Name, &emp[i].Age, &emp[i].Salary);
    }
    printf("\nEmp_ID\t|Emp_Department\t|Emp_Name\t\t|Emp_Age\t|\tEmp_Salry\n");
    printf("__________________________________________________________________________________________________\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t|%s\t\t|%s\t|\t%d\t|\t%d\n", emp[i].ID, emp[i].Department, emp[i].Name, emp[i].Age, emp[i].Salary);
        printf("__________________________________________________________________________________________________\n");
    }
    return 0;
}