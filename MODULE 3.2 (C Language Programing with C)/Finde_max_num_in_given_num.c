# include<stdio.h>
int main()
{
    int i=0,max=0,n=0,nums[100];
    printf("Please enter the value of number N: ");
    scanf("%d",&n);
    
    for(i;i<n;i++)
    {
        printf("\nPlease enter the value of %d: ",i+1);
        scanf("%d",&nums[i]);
    }
    max = nums[0];
    printf("\nYou have enterd following values: ");
    for (i=0;i<n;i++)
    {
        printf("%d ",nums[i]);
    }

    for (i=1;i<n;i++)
    {
        if(max<nums[i])
        {
            max = nums[i];
        }
    }
    printf("\nMaximum value is: %d\n",max);

    return 0;
}