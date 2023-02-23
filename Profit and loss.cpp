#include<stdio.h>
int main()
{
	int cp,sp,profit,loss;
	printf("Enter the cost price:");
	scanf("%d",&cp);
	printf("Enter the selling price:");
	scanf("%d",&sp);
	if(sp>cp)
	{
		printf("profit.\n");
		profit=sp-cp;
		printf("profit of Rs%d",profit);
	}
	else
	{
		printf("Loss\n");
		loss=cp-sp;
		printf("loss of Rs%d",loss);
	}
	return 0;
}
