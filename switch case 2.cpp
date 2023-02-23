#include<stdio.h>
int main()
{
	int i;
	printf("Enter the case number:");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("I am case 1");
			break;
		case 2:
			printf("I am case 2");
			break;
		case 3:
			printf("I am case 3");
			break;
		default:
			printf("I am default");
	}
	return 0;
}
