# include<stdio.h>
int main()
 {
    int a,b,rectangle,radius;
    float area,triangle,circle;

    printf("Enter the radius of circal ");
    scanf("%d",&radius);

    area = 3.14*radius*radius;

    printf("\nArea of circal = %f",area);

    printf("\nEnter the Length : ");
    scanf("%d",&a);
    printf("Enter the Width : ");
    scanf("%d",&b);

    rectangle= a*b;
    triangle=(a*b)*1/2;
    
    printf("\nArea of the rectangle : %d",rectangle);
    printf("\nArea of the triangle : %f",triangle);
    
    
   


    return 0;
 }