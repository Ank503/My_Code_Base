#include<stdio.h>
int main()
{
	int a,b,add,diff,mul,div;
	printf("Enter the numbers:");
	scanf("%d%d",&a,&b);
	add=a+b;
	diff=a-b;
	mul=a*b;
	div=a%b;
	printf("The sum of two numbers is:%d\n",add);
	printf("The difference of two numbers is:%d\n",diff);
	printf("The multiplication of two numbers is:%d\n",mul);
	printf("The division of two numbers is:%d\n",div);
	return 0;
}
