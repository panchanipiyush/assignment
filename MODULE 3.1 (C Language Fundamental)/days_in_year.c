#include <stdio.h>
int main()
{
    float year, days;

    printf("Enter the days :");
    scanf("%f", &days);

    year = days / 365;
    printf("Year of :%.3f", year);

    return 0;
}