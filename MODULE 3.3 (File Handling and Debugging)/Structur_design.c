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
    //printf("\nEnater Emplyee Info as ID, Department, Name, Age, Salary\n");
    for (int i = 0; i < num; i++)
    {
        printf("\nEnter your %d employee info: ",i+1);
        printf("\nEnter employee ID:");
        scanf("%d",&emp[i].ID);
        printf("Enter employee Department:");
        scanf("%s",emp[i].Department);
        printf("Enter employee Name:");
        scanf("%s",emp[i].Name);
        printf("Enter employee Age:");
        scanf("%d",&emp[i].Age);
        printf("Enter employee Salary:");
        scanf("%d",&emp[i].Salary);
            //scanf("%d %s %s %d %d", &emp[i].ID, emp[i].Department, emp[i].Name, &emp[i].Age, &emp[i].Salary);
    }
        printf("**************************************************************************************************\n");
        printf("Emp_ID\t|Emp_Department\t|Emp_Name\t|Emp_Age\t|Emp_Salry\n");
        printf("**************************************************************************************************\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t|%s\t\t|%s\t\t|%d\t\t|%d\n", emp[i].ID, emp[i].Department, emp[i].Name, emp[i].Age, emp[i].Salary);
        printf("__________________________________________________________________________________________________\n");
    }
    return 0;
}