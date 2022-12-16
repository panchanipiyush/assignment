# include<stdio.h>
int main()
{
    int num;
    printf("enater your number: ");
    scanf("%d",&num);

    (num%2 == 0) ? printf("%d is a Even number\n ",num) : printf("%d is a Odd number\n ",num);

    return 0;
}