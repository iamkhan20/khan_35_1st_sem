#include<stdio.h>
int main()
{
    int num,res = 1;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num>=1)
    {
        res*=num;
        num--;
    }
    printf("Factorail is : %d",res);
}