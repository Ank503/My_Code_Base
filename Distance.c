#include<stdio.h>
int main()
{
    int km;
    float ft,in,m,cm;
    //char name,name2;
    //printf("Enter the name of city1:");
    //scanf("%c",&name);
    //printf("Enter the name of city2:\n");
    //scanf("%c",&name2);
    printf("Enter the distance in km:");
    scanf("%d",&km);
    m=km*1000;
    ft=km*3280.84;
    in=km*39370.1;
    cm=km*100000;
    printf("Distance in meters is:%f\n",m);
    printf("Distance in centimeter is:%f\n",cm);
    printf("Distance in feet is:%f\n",ft);
    printf("Distance in inches is:%f\n",in);
    return 0;
}