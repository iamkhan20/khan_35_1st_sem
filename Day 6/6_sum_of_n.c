#include<stdio.h>
int main()
{
    int n, i=1,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    while(n>=i) 
    {
        sum += i;
        i++;
    }
    printf("Sum of natural numbers is : %d\n",sum);
    return 0;
}