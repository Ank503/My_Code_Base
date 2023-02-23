 #include<stdio.h>
 int main()
 {
 	int age;
 	char sex,ms,M,u,m,f;
 	printf("Enter the age of driver");
 	scanf("%d",&age);
 	printf("Enter the sex of driver\n");
 	scanf("%c",&sex);
 	printf("Enter the Marital status of driver\n ");
 	scanf("%c",&ms);
 	if(ms=='M')
 	printf("Driver will insured");
 	else
 	{
 		if(ms==u&&sex==m&&age>30)
 		printf("driver will be insured");
 		else
 		{
 			if(ms==u&&sex==f&&age>25)
 			printf("driver should be insured");
 			else
		 printf("Driver should not insured");
		 }
	}
	 return 0;
 }
