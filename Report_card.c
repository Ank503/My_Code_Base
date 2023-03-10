#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggr;
    float per;
    printf("Enter the marks of first subject:");
    scanf("%d",&m1);
    printf("Enter the marks of second subject:");
    scanf("%d",&m2);
    printf("Enter the marks third subject:");
    scanf("%d",&m3);
    printf("Enter the marks of fourth subject:");
    scanf("%d",&m4);
    printf("Enter the marks of fifth subject:");
    scanf("%d",&m5);
    aggr=m1+m2+m3+m4+m5;
    printf("Total obtained marks is: %d\n",aggr);
    per=aggr*100/500;
    printf("Percentage: %f",per);
    return 0;
}