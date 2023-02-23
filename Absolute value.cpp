#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(num>0)
	printf("The absolute value of number is:%d",num);
	else
	{
		if(num<0)
		num=num*-1;
		printf("The absolute value is:%d",num);
	}
	return 0;
}
