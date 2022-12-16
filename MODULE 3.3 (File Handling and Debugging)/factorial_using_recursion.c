# include<stdio.h>
int recursionFact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
      return n*recursionFact(n-1);
}
int main()
{
    int num;
    printf("Ener the number: ");
    scanf("%d",&num);

    printf("Factorail of no %d is = %d",num,recursionFact(num));
    return 0;
}