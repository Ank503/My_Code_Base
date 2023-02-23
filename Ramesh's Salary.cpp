#include<stdio.h>
int main()
{
	int bs,da,hra,gs;
	printf("Enter the basic salary of ramesh:");
	scanf("%d",&bs);
	da=bs*40/100;
	hra=bs*20/100;
	gs=bs+da+hra;
	printf("Dearness allowance is:%d\n",da);
	printf("House rent allowence is:%d\n",hra);
	printf("The gross salary of ramesh is:%d\n",gs);
	return 0;
}
