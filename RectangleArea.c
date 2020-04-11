include<stdio.h>
#include<math.h>

double rectangleArea(double width,double length) {
	double area = width * length;
	return area;
}
void main(void)
{	
	double width,length;
	printf("### Rectangle AREA ###");
	printf("\n Enter Width of Rectangle :");
	scanf_s("%lf", &width);
	printf("\n Enter Length of Rectangle :");
	scanf_s("%lf", &length);
	printf("\nArea : %lf", rectangleArea(width,length));
	
}
