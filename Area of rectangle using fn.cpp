#include<stdio.h>
int calarea(int l,int b);
int main()
{
	int l,b,area;
	printf("Enter the value of length and breadth:");
	scanf("%d%d",&l,&b);
	area=calarea(l,b);
	printf("area is:%d",area);
	return 0;
}
int calarea(int x,int y)
{
	int area;
	area=x*y;
	return(area);
}

