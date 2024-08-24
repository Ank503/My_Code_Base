#include<stdio.h>
int main()
{
    int num,i,pro;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Table of %d is:\n",num);
    for (i=1;i<=10;i++)
    {
        pro=num*i;
        printf("%d*%d=%d\n",num,i,pro);
    }
    return 0;
}