#include<stdio.h>
int main()
{
	int work,i=1,overtime,Bonus;
	while(i<=10){
		printf("Enter the Total working hours:");
	    scanf("%d",&work);
	    if(work>40)
	    {
	    	overtime=work-40;
	    	printf("overtime is:%dhrs\n",overtime);
	    	Bonus=overtime*12;
	    	printf("Bonus:RS%d\n",Bonus);
		}
		else
		printf("NoBonus\n");
		i=i+1;
	}
	return 0;
}
