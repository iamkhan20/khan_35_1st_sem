#include<stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0]=20;
    marks[0][1]=50;
    marks[1][0]=90;
    marks[1][1]=70;
    printf("1st block =%d \n",marks[0][0]);
    printf("2nd block =%d \n",marks[0][1]);
    printf("3rd block =%d \n",marks[1][0]);
    printf("4th block =%d \n",marks[1][1]);
    printf("size of array=%d \n",sizeof(marks));
    printf("lenght of array=%d \n",sizeof(marks)/sizeof(marks[0][0]));
}