// Write a program to find area of circle,rectangle and tringle.
#include <stdio.h>
int main()
{
	float radius, length, breadth, base, height, area;
	// float base, height, area;
	int choice;

	printf("Enter\n");
	printf("1. To find area of triangle \n2. To find area of Square\n");
	printf("3. To find area of circle \n4. To find area of rectangle\n");

	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("Enter base and height of a triangle\n");
		scanf("%f %f", &base, &height);
		area = (1.0 / 2) * base * height;
		printf("Area of Triangle: %f\n", area);
		break;

	case 2:
		printf("Enter length of a Square\n");
		scanf("%f", &length);
		area = length * length;
		printf("Area of Square: %f\n", area);
		break;

	case 3:
		printf("Enter the radius of a Circle\n");
		scanf("%f", &radius);
		area = 3.14 * radius * radius;
		printf("Area of Circle: %.2f\n", area);
		break;

	case 4:
		printf("Enter the length and breadth of a Rectangle\n");
		scanf("%f %f", &length, &breadth);
		area = length * breadth;
		printf("Area of Rectangle: %f\n", area);
		break;
	default:
		printf("Invalid Choice\n");
	}
	return 0;
}
