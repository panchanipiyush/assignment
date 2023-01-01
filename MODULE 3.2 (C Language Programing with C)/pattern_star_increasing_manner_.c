# include<stdio.h>
int main()
{
    int i,j,k;

for (i=1;i<=5;i++)
{
    for(k=5;k>=i;k--)
    printf(" ");
    for (j=1; j<=i;j++)
    {
        printf("* ");
    }
     printf("\n");
}
return 0;
}
/*int n=4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" ");
        }
        n--;
        for (int k = 0; k <= i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }*/