#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("Enter the angles of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	printf("The sum of angles of a triangle is:%d\n",sum);
	if(sum==180)
	printf("Triangle is valid\n");
	else
	printf("Triangle is not valid\n");
	return 0;
}
