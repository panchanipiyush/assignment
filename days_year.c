# include<stdio.h>
int main()
{
    float days,years;

    printf("Enter the no of days : ");
    scanf("%f",&days);

    years= days/365;
    printf("years of : %.2f",years);

    
    return 0;
}