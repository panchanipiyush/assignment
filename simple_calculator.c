# include<stdio.h>
int main()
{
int sum,sub,mul,modu,num1,num2;
float div;
printf("Enter the number 1 = ");
scanf("%d",&num1);
printf("Enter the number 2 = ");
scanf("%d",&num2);

sum = num1+num2;
sub = num1-num2;
mul = num1*num2;
div = num1/(float)num2;
modu = num1%num2;

printf("Sum of the number = %d \n",sum);
printf("substraction of the number = %d \n",sub);
printf("multiplication of the number = %d \n",mul);
printf("Division of the number = %.2f \n",div);
printf("Modulo of the number = %d \n",modu);

    return 0;
}


