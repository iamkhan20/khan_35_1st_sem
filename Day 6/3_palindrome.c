#include<stdio.h>
int main()
{
    int num, dup, reverse=0, digit=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    dup = num;
    while(num!=0)
    {
        digit = num %10;
        reverse= reverse*10+digit;
        num = num/10;
    }
    if(dup==reverse)
    {
        printf("It is a palindrome number");
    }
    else
    {
        printf("It is not a palindrome number");
    }    
}