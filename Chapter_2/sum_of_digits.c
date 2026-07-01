#include<stdio.h>
int main()
{
    int num,x,y;
    int sum=0;
    printf("Enter the numbers:");
    scanf("%d",&num);
    /*5th Number*/
    x=num%10; //reminder
    y=num/10; //quotient
    sum=sum+x;
    /*4th Number*/
    x=y%10;
    y=y/10;
    sum=sum+x;
    /*3rd Number*/
    x=y%10;
    y=y/10;
    sum=sum+x;
    /*2nd Number*/
    x=y%10;
    y=y/10;
    sum=sum+x;
    /*1st Number*/
    x=y%10;
    sum=sum+x;
    printf("Sum of digits is:%d",sum);
    return 0;
}