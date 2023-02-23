#include<stdio.h>
int main()
{
	int A0wd,A0ht,A1wd,A1ht;
	int A2wd,A2ht,A3wd,A3ht;
	int A4wd,A4ht,A5wd,A5ht;
	int A6wd,A6ht,A7wd,A7ht;
	int A8wd,A8ht;
	
	A0ht=1189;
	A0wd=841;
	printf("A0 paper size is: width=%d and Height is : Height=%d\n",A0wd,A0ht);
	A1ht=A0wd; 
	A1wd=A0ht/2;
	printf("A1 paper size is: width=%d and Height is : Height=%d\n",A1ht,A1wd);
	A2ht=A1wd;
	A2wd=A1ht/2;
	printf("A2 paper size is: width=%d and Height is : Height=%d\n",A2ht,A2wd);
	A3ht=A2wd;
	A3wd=A2ht/2;
	printf("A3 paper size is: width=%d and Height is : Height=%d\n",A3ht,A3wd);
	A4ht=A3wd;
	A4wd=A3ht/2;
	printf("A4 paper size is: width=%d and Height is : Height=%d\n",A4ht,A4wd);
	A5ht=A4wd;
	A5wd=A4ht/2;
	printf("A5 paper size is: width=%d and Height is : Height=%d\n",A5ht,A5wd);
	A6ht=A5wd;
	A6wd=A5ht/2;
	printf("A6 paper size is: width=%d and Height is : Height=%d\n",A6ht,A6wd);
	A7ht=A6wd;
	A7wd=A6ht/2;
	printf("A7 paper size is: width=%d and Height is : height=%d\n",A7ht,A7wd);
	A8ht=A7wd;
	A8wd=A7ht/2;
	printf("A8 paper size is: width=%d and Height is : height=%d\n",A8ht,A8wd);
	return 0;
}
