# include<stdio.h>
int main()
{
    int i,num;
    printf("enter a numbers: ");
    scanf("%d",&num);

    printf("table for %d is: \n",num);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}