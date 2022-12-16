// write a progrm to find area of circle,rectangle and triangle.
#include <stdio.h>
int main()
{
   int length,width, rectangle, radius;
   float area, triangle, circle;

   printf("Enter the radius of circal ");
   scanf("%d", &radius);

   area = 3.14 * radius * radius;

   printf("\nArea of circal = %f", area);

   printf("\nEnter the Length : ");
   scanf("%d", &length);
   printf("Enter the Width : ");
   scanf("%d", &width);

   rectangle = a * b;
   triangle = (a * b) * 1 / 2;

   printf("\nArea of the rectangle : %d", rectangle);
   printf("\nArea of the triangle : %f", triangle);

   return 0;
}