#include<stdio.h>
int main()
{
	int l,b,area,perimeter,size;
	printf("Enter the length of a rectangle:");
	scanf("%d",&l);
	printf("Enter the breadth of a rectangle:");
	scanf("%d",&b);
	area=l*b;
	printf("The area of rectangle is:%d\n",area);
	perimeter=2*(l+b);
	printf("The perimeter of rectangle is:%d\n",perimeter);
	if(area>perimeter)
	{
	    printf("Area is greater.\n");
		size=area-perimeter;
		printf("Area is greater by:%dm^2\n",size);	
	}
	else
	{
		printf("Perimeter is greater.\n");
	size=perimeter-area;
	printf("Perimeter is greater by:%dm^2\n");
	return 0;
	}
	
}
