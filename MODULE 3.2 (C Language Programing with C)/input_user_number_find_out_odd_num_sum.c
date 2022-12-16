#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&num);

    printf("Odd numbers frome 1 To %d are :\n",num);
    for(i=1;i<=num;i++)
    {
        if(i % 2 == 1)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        
    }
    printf("Sum of Odd Number from 1 To %d is %d\n",num,sum);
    return 0;
}