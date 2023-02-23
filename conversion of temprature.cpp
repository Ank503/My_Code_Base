#include<stdio.h>
int main()
{
	float t,c;
	printf("Enter the temprature of Bihar in farenheit:");
	scanf("%f",&t);
	c=(t-32)*5/9;
	printf("The temprature in celcius is:%f",c);
	return 0;
}
