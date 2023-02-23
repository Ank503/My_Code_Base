#include<stdio.h>
int main()
{
	int i;
	printf("Eter the value of case:");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("I am case 1\n");
		case 2:
			printf("I am case 2\n");
		case 3:
			printf("I am case 3\n");
		default:
			printf("I am default\n");
			break;
	}
	return 0;
}
