//Write a program of structure employee that provides the following information -print and display empno, empname, address and age 
# include<stdio.h>
struct Employee
{
    int EmpNO;
    char EmpName[100];
    int EmpAge;
    char EmpAdd[200];
};
int main()
{   
    int num;
    printf("Enter number of Employee: ");
    scanf("%d",&num);
    struct Employee Emp[num];
    for (int i = 0; i < num; i++)
    {
        printf("\nEnter your No.%d Employee detail",i+1);
        printf("\nEmp No: ");
        scanf("%d",&Emp[i].EmpNO);
        printf("Emp Name: ");
        scanf("%s",Emp[i].EmpName);
        printf("Emp Age: ");
        scanf("%d",&Emp[i].EmpAge);
        printf("Emp Address: ");
        scanf("%s",Emp[i].EmpAdd);
         printf("\n");
    }
    for (int i = 0; i < num; i++)
    {
        printf("\nyour No.%d Employee detail",i+1);
        printf("\nEmp No: %d",Emp[i].EmpNO);
        printf("\nEmp Name: %s",Emp[i].EmpName);
        printf("\nEmp Age: %d",Emp[i].EmpAge);
        printf("\nEmp Address: %s",Emp[i].EmpAdd);
        printf("\n");
    }
     printf("\n");    
    return 0;
}