# include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter the limit: ");
    scanf("%d", &num);
    printf("Even numbers frome 1 To %d are :\n",num);
    for(i=1;i<=num;i++)
    {
        if(i %2 == 0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        
    }
    printf("Sum of Even Number from 1 To %d is %d\n",num,sum);
    return 0;
}