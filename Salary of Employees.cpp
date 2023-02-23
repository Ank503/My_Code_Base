#include<stdio.h>
int main()
{
	int yos,sal,qul;
	char g,m,f;
	printf("Enter the gender years of service and qualification:");
	scanf("%c%d%d",&g,&yos,&qul);
	if(g=='m'&&yos>=10&&qul==1)
	sal=15000;
	else if(g=='m'&&yos>=10&&qul==0)
	sal=10000;
	else if(g=='m'&&yos<10&&qul==1)
	sal=10000;
	else if(g=='m'&&yos<10&&qul==0)
	sal=7000;
	else if(g=='f'&&yos>=10&&qul==1)
	sal=12000;
	else if(g=='f'&&yos>=10&&qul==0)
	sal=9000;
	else if(g=='f'&&yos<10&&qul==1)
	sal=10000;
	else if(g=='f'&&yos<10&&qul==0)
	sal=6000;
	printf("Salary of Employee is:%d\n",sal);
	return 0;
}
