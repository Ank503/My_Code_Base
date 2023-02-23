#include<stdio.h>
int main()
{
	float l,b,r,area,perimeter,aoc,poc;
	printf("Enter the length and breadth of a rectangle");
	scanf("%f%f",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("The area of rectangle is:%f\n",area);
	printf("The perimeter of rectangle is:%f\n",perimeter);
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	aoc=3.14*r*r;
	poc=2*3.14*r;
	printf("The area of circle is:%f\n",aoc);
	printf("The perimeter of circle is:%f\n",poc);
	return 0;
}
