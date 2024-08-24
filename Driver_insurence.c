
/*Drvers will be insure if:
1.marrid
2.unmarrid male and above 30 years of age.
3.unmarrid female and above 25 years of age.
input to be taken:age,sex and marital status 
*/
#include<stdio.h>
int main()
{
    int age;
    char sex,ms,x;
    printf("Enter the age sex and ms:\n");
    scanf("%d %c %c",&age,&sex,&ms);
    
    //printf("%d%c%c",age,sex,ms);/*while taking character as input put space between %c*/
    if(ms=='m')
        printf("Driver will be insured");
    else
    {
        if(sex=='M')
        {
            if(age>30)
                printf("Driver will be insured");
            else
                printf("Driver will not be insured");
        }
        else
        {
            if(age>25)
                printf("Driver should be insured");
            else
                printf("Driver should not be insured");
        }
        
        
    }
    return 0;
}