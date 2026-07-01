#include<stdio.h>
int main()
{
    float km,m,cm,ft,in;
    printf("Enter the distance in km:");
    scanf("%f",&km);
    m=km*1000;
    cm=km*100000;
    ft=km*3281;
    printf("Distance in m is %f m\n",m);
    printf("Distance in cm is %f cm\n",cm);
    printf("Distance in ft is %f ft\n",ft);
    return 0;
}