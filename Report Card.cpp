#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,Total_marks;
	float per;
	printf("Enter the marks of five subjects:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	Total_marks=m1+m2+m3+m4+m5;
	printf("Total marks is:%d\n",Total_marks);
	per=(Total_marks*100.0)/500.0;
	printf("Percentage is:%f\n",per);
	if(per>=60)
	printf("First division.\n");
	else
	{
		if(per>=50&&per<=59)
		printf("Second division.\n");
		else
		{
			if(per>=40&&per<=49)
			printf("Third division.\n");
			else
			printf("Fail\n");
		}
	}
	return 0;
	
}
