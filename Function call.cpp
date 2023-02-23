#include<stdio.h>
void italy();
void paris();
void america();
int main()
{
	printf("I am in main function\n");
	italy();
	printf("I am back in main\n");
}
void italy()
{
	printf("I am in Italy\n");
	paris();
	printf("I am back in paris\n");
}
void paris()
{
	printf("I am in paris\n");
	america();
	printf("I am back in america\n");
}
void america()
{
	printf("I am in america\n");
	
}
