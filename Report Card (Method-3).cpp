#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("Enter the marks of student.\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/500*100;
	if(per>=60)
	printf("First division\n");
	else if(per>=50)
	printf("Second division");
    else if(per>=40)
	printf("Third division");
	else
	printf("Fail");
	return 0;
}
