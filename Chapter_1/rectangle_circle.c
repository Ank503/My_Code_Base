#include<stdio.h>
int main()
{
    float l,b,r,area_of_rectangle,perimeter_of_rectangle,area_of_circle,circumference_of_circle;
    printf("Enter the length of rectangle:");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle:");
    scanf("%f",&b);
    area_of_rectangle=l*b;
    perimeter_of_rectangle=2*l+2*b;
    printf("Area of rectangle is: %f\n",area_of_rectangle);
    printf("Perimeter of rectangle is: %f\n",perimeter_of_rectangle);
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    area_of_circle=3.14*r*r;
    circumference_of_circle=2*3.14*r;
    printf("Area of circle is: %f\n",area_of_circle);
    printf("Circumference of circle is: %f\n",circumference_of_circle);
    return 0;
}