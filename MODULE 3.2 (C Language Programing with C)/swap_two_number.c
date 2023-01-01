#include<stdio.h>
#include<conio.h>
 int main()    
{    
int a, b;
printf("Enater the value of a :");
scanf("%d",&a);
printf("Enater the value of b :");
scanf("%d",&b);    
printf("Before swap a=%d b=%d",a,b);

a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)   
a=a-b;//a=20 (30-10)

printf("\nAfter swaping a=%d b=%d",a,b); 

return 0;
getch();
}   