#include<stdio.h>
void add();
int sub();
int main()
{
    add();
    int res = sub();
    printf("Subtraction is : %d\n",res);
}
void add()
{
    printf("Addition is : %d\n",(14+50));
}
int sub()
{
    return (100-30);
}