#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temprature in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9; /*on removing () it is giving different answer*/ 
    printf("Temprature in centigrade is: %f",c);
    return 0;
}