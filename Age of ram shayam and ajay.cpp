#include<stdio.h>
int main()
{
	int age_of_ram,age_of_shayam,age_of_ajay;
	char Ram,Shayam,Ajay;
	printf("Enter the age of Ram:\n");
	printf("Enter the age of shayam:\n");
	printf("Enter the age of Ajay:\n");
	scanf("%d%d%d",&age_of_ram,&age_of_shayam,&age_of_ajay);
	if(age_of_ram<age_of_shayam && age_of_ram<age_of_ajay)
	printf("Ram is youngest\n");
	if(age_of_shayam<age_of_ram && age_of_shayam<age_of_ajay)
	printf("shayam is youngest\n");
	if(age_of_ajay<age_of_ram && age_of_ajay<age_of_shayam)
	printf("Ajay is youngest\n");
	return 0;
}
