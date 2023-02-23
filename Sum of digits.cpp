#include<stdio.h>
int main()
{
	int sum,a,b,c,d,e;
	printf("Enter the five numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	printf("The sum of digits is:%d",sum);
	return 0;
}
