#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("Enter the three sides of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b;
	printf("Sum of two sides are:%d\n",sum);
	if(a>b&&a>c)
	printf("A is largest\n");
	if(b>c&&b>a)
	printf("B is largest\n");
	if(c>a&&c>b)
	printf("C is largest\n");
	if(a+b>c)
	{
		if(b+c>a)
		{
			if(a+c>b)
			printf("Triangle is Valid\n");
		}
	}
	else
	printf("Triangle is not valid\n");
	return 0;
}
