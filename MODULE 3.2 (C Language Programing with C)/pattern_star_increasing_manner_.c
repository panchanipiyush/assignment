/*# include<stdio.h>
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
}*/
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
#include <stdio.h>
int main()
{
    int i, j, rows, k = 0;
    //printf("Enter the number of rows: ");
    //scanf("%d", &rows);
    for (i = 1; i <= 5; ++i, k = 0)
    {
        for (j = 1; j <= 5 - i; ++j)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }
    return 0;
}
