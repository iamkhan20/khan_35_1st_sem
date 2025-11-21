#include<stdio.h>
int main ()
{
    int a = 1;
    int b = 0;
    printf("A && B = %d \n",(a&&b));
    printf("A || B = %d \n",(a||b));
    printf("! A = %d \n",(!a));
    printf("! B = %d \n",(!b));  
    return 0;
}