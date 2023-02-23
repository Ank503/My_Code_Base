#include<stdio.h>
int main()
{
	int num,year,leap;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0)
	printf("This year is leap year.\n");
	else
	printf("This is not a leap year");
	return 0;
}
