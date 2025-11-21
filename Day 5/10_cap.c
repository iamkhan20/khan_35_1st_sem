#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    {
        printf("entered character is in upper case\n");
    }
    else
    {
        printf("Entered character is in lower case\n ");
    }
    return 0;
}