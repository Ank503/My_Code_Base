#include<stdio.h>
int main()
{
	int i=3;
	int *j;
	j=&i;
	printf("Address of i=%u\n",&j);
	printf("Address of j=%u\n",&j);
	printf("Value of i=%d\n",i);
	printf("Value of j=%d\n",j);
	printf("value of i=%d\n",*j);
	printf("Value of i=%d\n",*(&i));
	return 0;
}
