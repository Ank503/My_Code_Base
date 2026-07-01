#include<stdio.h>
int main()
{
    int num,a,n;
    long int rev=0;
    printf("Enter the numbers:");
    scanf("%d",&num);
    /*last digit*/
    a=num%10; /*remainder*/
    n=num/10; /*quotient*/
    rev=rev+a*100000L;
    /*4th digit*/
    a=n%10;
    n=n/10;
    rev=rev+a*1000;
    /*3rd digit*/
    a=n%10;
    n=n/10;
    rev=rev+a*100;
    /*2nd digit*/
    a=n%10;
    n=n/10;
    rev=rev+a*10;
    /*1st digit*/
    a=n/10;
    rev=rev+a;
    printf("Reversed number is:%d",rev);
    return 0;
}