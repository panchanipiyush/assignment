# include<stdio.h>
int main()
{
    float years,days;

    printf(" Enter the years :");
    scanf("%f",&years);

    days = years*365.2425;
    printf("days of :%.4f",days);
    
    

    return 0;
}