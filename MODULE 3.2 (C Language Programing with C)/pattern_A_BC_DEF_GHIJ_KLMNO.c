# include<stdio.h>
int main()
{
    int i,j,k;//take other than k or k=65 or k=0.

for (i=1;i<=5;i++)
{
    for (j=1; j<=i;j++)
    {
        printf("%c ",(k++)+65);// take other than (k++)+65 or (k++)
    }
     printf("\n");
}
return 0;
}