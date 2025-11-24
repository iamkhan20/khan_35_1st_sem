#include<stdio.h>
int add(int num1, int num2);
int sub(int num1, int num2);
int main()
{
    int res1=add(4,5);
    int res2=add(10,20);
    int res3=sub(70,50);
    int res4=sub(100,55);
    printf("Result 1 : %d\n",res1);
    printf("Result 2 : %d\n",res2);
    printf("Result 3 : %d\n",res3);
    printf("Result 4 : %d\n",res4);
}
int add(int num1, int num2)
{
    return num1+num2;
}
int sub(int num1, int num2)
{
    return num1-num2;
}