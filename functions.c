// #include<stdio.h>
// void fruits();
// void vegetables();
// void sweets();
// void fastfood();
// int main()
// {
//     printf("I am in main\n");
//     fruits();
//     vegetables();
//     sweets();
//     fastfood();
// }
// void fruits()
// {
//     printf("Apple,Banana,cherry,papaya\n");
// }
// void vegetables()
// {
//     printf("Potato,cauliflower,Tomato,onion\n");
// }
// void sweets()
// {
//     printf("Jalebi,Barfi,Rasgulla,gulabjamun\n");
// }
// void fastfood()
// {
//     printf("Chowmein,Burger,pattie,Rolls\n");
// }

// Type-2
#include<stdio.h>
void london();
void paris();
void newyork();
int main()
{
    printf("I am in main function\n");
    london();
    paris();
    printf("I will come back to my hometown\n");
}
void london()
{
    printf("I will go to london\n");
}
void paris()
{
    newyork();
    printf("I will go to paris\n");
}
void newyork()
{
    printf("I will go to newyork\n");
}