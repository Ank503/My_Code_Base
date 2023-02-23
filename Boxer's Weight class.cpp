#include<stdio.h>
int main()
{
	int weight_in_pounds;
	printf("Enter the weight in pounds.");
	scanf("%d",&weight_in_pounds);
	if(weight_in_pounds<115)
	printf("Flyweight");
	else
	{
	    if(weight_in_pounds>=115&&weight_in_pounds<=121)
	    printf("Bantamweight");
	    else
	    {
	    	if(weight_in_pounds>=122&&weight_in_pounds<=153)
	    	printf("Featherweight");
	    	else
	    	{
	    		if(weight_in_pounds>=154&&weight_in_pounds<=189)
	    		printf("Middleweight");
	    		else
	    		{
	    			if(weight_in_pounds>=190)
	    			printf("Heavyweight");
				}
			}
		}
	}
	return 0;
}
