#include<stdio.h>
int main()
{
    int bs,hra,da,gs;
    printf("Enter the Basic Salary of Ramesh:");
    scanf("%d",&bs);
    da=bs*40/100;
    hra=bs*20/100;
    printf("Dearness allowance is: %d\n",da);
    printf("House rent allowance is: %d\n",hra);
    gs=bs+da+hra;
    printf("Gross Salary is: %d",gs);
    return 0;
}