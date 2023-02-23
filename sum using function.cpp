#include<stdio.h>
int calsum(int x,int y,int z);
int main()
{
	int a,b,c,sum;
	printf("Enter any Three numbers");
	scanf("%d%d%d",&a,&b,&c);
	sum=calsum(a,b,c);
	printf("Sum=%d\n",sum);
	return 0;
}
int calsum(int a,int b,int c)
{
	int d;
	d=a+b+c;
	return(d);
}
