#include<stdio.h>
#include<math.h>

double triangleArea(double base,double height) {
	double area = (base * height)/2;
	return area;
}
void main(void)
{	
	double base,height;
	printf("### TRIANGLE AREA ###");
	printf("\n Enter Base of Triangle :");
	scanf_s("%lf", &base);
	printf("\n Enter Height of Triangle :");
	scanf_s("%lf", &height);
	printf("\nArea : %lf", triangleArea(base,height));
	
}
