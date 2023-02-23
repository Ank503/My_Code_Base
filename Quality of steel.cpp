#include<stdio.h>
int main()
{
	int Hardness,Tensile_strength;
	float carbon_content;
	printf("Enter the Hardness,Tensile_strength,carbon_content");
	scanf("%d%d%f",&Hardness,&Tensile_strength,&carbon_content);
	if(Hardness>50&&carbon_content<0.7&&Tensile_strength>5600)
	printf("Grade 10");
	else if(Hardness>50&&carbon_content<0.7)
	{
		printf("Grade 9");
	}
	else if(carbon_content<0.7&&Tensile_strength>5600)
	{
		printf("Grade 8");
	}
	else if(Hardness>50&&Tensile_strength>5600)
	{
		printf("Grade 7");
	}
	else if(Hardness>50)
	{
		printf("Grade 6");
	}
	else
	printf("Grade 5");
	return 0;
}
