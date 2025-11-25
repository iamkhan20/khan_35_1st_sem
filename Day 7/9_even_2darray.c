#include<stdio.h>
int main()
{
    int marks[2][2];
    printf("enter a elements=");
     for(int i=0;i<2;i++)
     {
        for(int j=0;j<2;j++)

        {
            scanf("%d",&marks[i][j]);
        }
    }
    printf("even elements=\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(marks[i][j]%2==0)
            {
                printf("%d ",marks[i][j]);
            }
        }
        printf("\n");
    } 
} 
