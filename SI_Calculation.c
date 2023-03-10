# include<stdio.h>
int main()
{
    int p;
    float r,t,si;
    printf("Enter the value of principal:");
    scanf("%d",&p);
    printf("Enter the value of Time:");
    scanf("%f",&t);
    printf("Enter the value of Rate:");
    scanf("%f",&r);
    //p=10000;
    //n=3;
    //r=8.5;
    si=p*t*r/100;
    printf("Simple Intrest is:%f",si);
    return 0;
}