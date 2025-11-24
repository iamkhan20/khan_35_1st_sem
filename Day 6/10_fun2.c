#include<stdio.h>
void mul(int num1, int num2);
int main()
{
    mul(4,5);
    mul(10,20);
}
void mul(int num1, int num2)
{
    printf("Multiplication is : %d\n",num1*num2);
}