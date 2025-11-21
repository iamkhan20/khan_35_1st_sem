#include<stdio.h>
int main()
{
    printf("The numbers are : \n ");
    for(int i=1;i<=100;i++)
    {
        if(i%5==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}