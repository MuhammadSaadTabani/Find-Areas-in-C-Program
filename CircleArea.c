#include<stdio.h>
#include<math.h>

double circleArea(double radius) {
	double area = 3.142 * pow(radius, 2);
	return area;
}
void main(void)
{	
	double radius;
	printf("### CIRCLE AREA ###");
	printf("\n Enter radius of circle to find area :");
	scanf_s("%lf", &radius);
	printf("\nArea : %lf", circleArea(radius));
	
}
