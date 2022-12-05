# include<stdio.h>
int main()
{
    int n,Last,sum;
    printf("Enater the number: ");
    scanf("%d",&n);

    Last = n%10;

    while(n>9)
    {
        n = n/10;
    }
    sum = n+Last;
    printf("Sum of 1st and last digit = %d",sum);
   
    return 0;
}