# include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("Enter a Number: ");
    scanf("%d",&num);

    while(num != 0 )
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
        
        printf("%d ",rem);
    }
    

    return 0;
}
