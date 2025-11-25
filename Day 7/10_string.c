#include<stdio.h>
#include<string.h>
int main()
{
    char user_input[100];
    printf("Enter a string : ");
    fgets(user_input,100, stdin);
    printf("Entered string : %s", user_input);
    printf("Length of the string is : %d\n", strlen(user_input)-1);
    printf("Size of the string is : %d\n", sizeof(user_input));
}    