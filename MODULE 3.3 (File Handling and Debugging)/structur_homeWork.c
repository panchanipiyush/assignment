#include <stdio.h>
#include <string.h>
struct employee
{
    int ID, Age, Salary;
    char Name[100], Department[50];
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
    }
    printf("**********************************************************************************\n");
    printf("Emp ID\t\t|Emp Department\t|Emp Name\t|Emp Age\t|Emp Salary\n");
    printf("**********************************************************************************\n");
    for  (int i = 0; i < num; i++)
    {
        //printf("Employeed %d detail:\n", i + 1);
        printf("%d\t\t|%s\t\t|%s\t\t|%d\t\t|%d\n", emp[i].ID, emp[i].Department, emp[i].Name, emp[i].Age, emp[i].Salary);
        printf("----------------------------------------------------------------------------------ssssss\n");
    }
    return 0;
}
