#include<stdio.h>
int main()
{
    int num,i,isprime=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num<=1)
    {
        isprime=0;
    }
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            isprime=0;
            break;
        }
    }   
    if(isprime==1)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}
