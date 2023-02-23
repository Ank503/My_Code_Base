#include<stdio.h>
int main()
{
	int num,last_digit;
	printf("Enter the number:");
	scanf("%d",&num);
	last_digit=num%10;
	printf("The last digit is:%d",last_digit);
	return 0;
}
