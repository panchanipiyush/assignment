# include<stdio.h>
int main()
{

    for(int i=1;i<=6;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    for(int i=5;i>=0;i--)
    {
        for (int j=i;j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}