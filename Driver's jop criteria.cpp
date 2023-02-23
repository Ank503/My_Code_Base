#include<stdio.h>
int main()
{
	int age;
	char sex,ms;
	printf("Enter the age sex and marital status:");
	scanf("%d%c%c",&age,&sex,&ms);
	if(ms=='M')
	printf("Driver should be insured");
	else
	{
		if(sex='M')
		{
			if(age>30)
			printf("Driver should be insured");
			else
			printf("Driver should not insured");
		}
		else
		{
			if(age>25)
		printf("Driver should be insured");
		else
		printf("Driver should not insured");
		}
		
	}
	return 0;
}
