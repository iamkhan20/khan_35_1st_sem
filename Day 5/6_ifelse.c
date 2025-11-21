#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : \n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("Given number is positive");
    }
    else
    { 
       printf("Given number is negative");
    }
    return 0;
}