#include<stdio.h>
int main()
{
	int Av;
	printf("Enter the ASCII value:");
	scanf("%d",&Av);
	if(Av>=65&&Av<=90)
	printf("Capital letters");
	else
	{
		if(Av>=97&&Av<=122)
		printf("Small letters");
		else
		{
			if(Av>=48&&Av<=57)
			printf("Numers/Digits");
			else
			{
				if(Av>=0&&Av<=47||Av>=58&&Av<=64||Av>=91&&Av<=96||Av>=123&&Av<=127)
				printf("Special symbol");
				else
				printf("No Symbol");
			}
		}
	}
}
