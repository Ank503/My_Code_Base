#include<stdio.h>
int calsum(int a,int b);
int main()
{
	int a=2,b=4,sum;
	printf("Enter the value of and b:\n");
	scanf("%d%d",&a,&b);
	sum=calsum(a,b);
	printf("The sum of two numbers is:%d",sum);
	return 0;
}
int calsum(int a,int b)
{
	int a,b,sum;
	sum=a+b;
	printf("Sum=%d",sum);
}
