#include<stdio.h>
int main()
{
	int bs,hra,da,gs;
	printf("Enter the basic salary:");
	scanf("%d",&bs);
if(bs<1500)
	{
		if(bs<=1500)
		hra=bs*10/100;
		da=bs*90/100;
		printf("The basic salary is less then 1500\n");
		printf("The HRA is:%d\n",hra);
		printf("The DA is:%d\n",da);
	}
	else
	{
		hra=500;
		da=bs*98/100;
		printf("The basic salary is greater then 1500\n");
		printf("The HRA is:%d\n",hra);
		printf("The DA is:%d\n",da);
	}
	gs=bs+hra+da;
	printf("The gross salary is:%d\n",gs);
	return 0;
}
