#include<stdio.h>
int main()
{
	int yos,cy,yoj,bonus;
	printf("Enter the current year of employee:");
	scanf("%d",&cy);
	printf("Enter the year of joining:");
	scanf("%d",&yoj);
	yos=cy-yoj;
	printf("Total years of service is:%d\n",yos);
	if(yos>3)
	{
		bonus=2500;
	    printf("Bonus=Rs.%d\n",bonus);
	}
	return 0;
}
