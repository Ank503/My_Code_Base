#include<stdio.h>
int main()
{
	float a,b,area;
	printf("Enter the base and height of a triangle:\n");
	scanf("%f%f",&a,&b);
	area=1.5*a*b;
	printf("The area of Triangle is:%fm^2",area);
	return 0;
}
