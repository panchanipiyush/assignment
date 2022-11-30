# include<stdio.h>
# include<math.h>
int main()
// program write for simle and compund intreset ,
//p is equal to principl ammount,r is equal to rate of interest,t is equal to time in year,si is equal to simple interest.
//ci is equal to compund interest.
// simple interest formula = (p*r*t)/100 ,
// compund interest formula = p*((1+r*100)t -1) . t is equal to powerof bracket formula (1+r*100)t
{
    float p,r,t,si,ci;
    printf("enter your principal ammount : ");
    scanf("%f",&p);
    printf("Enter your rate of interest : ");
    scanf("%f",&r);
    printf("Enter your time in year : ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    ci=p*(pow(1+r/100,t)-1);
    printf("simple interest of %.3f \n",si);
    printf("compund interest of %0.3f \n",ci);

    return 0;

}
