#include<stdio.h>
int main()
{
	int bonus,yoj,cy,yos;
	printf("Enter the current year:");
	scanf("%d",&cy);
	printf("Enter the year of joining:");
	scanf("%d",&yoj);
	yos=cy-yoj;
	printf("The year of service is:%d\n",yos);
	if(yos>3)
	printf("The bonus of 2500 will be given.");
	else
	printf("year of service is less then three years..No bonus.");
	return 0;
}
