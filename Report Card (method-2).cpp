#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per,Total_marks;
	printf("Enter the marks of Student");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	Total_marks=m1+m2+m3+m4+m5;
	printf("Total marks is:%d",Total_marks);
	per=(Total_marks)/500*100;
	if(per>=60)
	printf("First division\n");
	if((per>=50)&&(per<=59))
	printf("Second division\n");
	if((per>=40)&&(per<=50))
	printf("Third division\n");
	if(per<40)
	printf("Fail");
	return 0;
}
