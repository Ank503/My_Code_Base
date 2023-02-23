#include<stdio.h>
int main()
{
	int num,n,a,sum;
	printf("Enter The Five Digit Number:");
	scanf("%d",&num);
	a=num%10;
	n=num/10;
	sum=sum+a;
	
	a=n%10;
	n=n/10;
	sum=sum+a;
	
	a=n%10;
	n=n/10;
	sum=sum+a;
	
	a=n%10;
	n=n/10;
	sum=sum+a;
	
	a=n%10;
	sum=sum+a;
	printf("Sum of Five digit Number is:%d",sum);
	return 0;
}
