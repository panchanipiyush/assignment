
			printf("Area of Triangle:\t%f\n", area);
			
			break;
		
		case 2:
			printf("Enter length of a Square\n");
			scanf("%f", &length);
			
			area = length * length;
			
			printf("Area of Square:\t%f\n", area);
			
			break;
		
		case 3:
			printf("Enter the radius of a Circle\n");
			scanf("%f", &radius);
			
			area = 3.14* radius * radius;
			
			printf("Area of Circle:\t%f\n", area);
			
			break;
			
		case 4:
			printf("Enter the length and breadth of a Rectangle\n");
			scanf("%f %f", &length, &breadth);
			
			area = length * breadth;
			
			printf("Area of Rectangle:\t%f\n", area);
			
			break;
		
		default:
			printf("Invalid Choice\n");
	}
	return 0;

}
