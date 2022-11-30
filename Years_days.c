# include<stdio.h>
int main()
{
    float years,days;

    printf(" Enter the years :");
    scanf("%f",&years);

    days = 365/years;

    printf("days of :%.3f",days);
    

    return 0;
}