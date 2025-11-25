#include<stdio.h>
#include<string.h>
int main()
{
    char first_name[] = "John";
    char last_name[] = "Apple";
    char another_string[] = "John";
    printf("Length of first_name: %d\n", strlen(first_name));
    printf("Full name: %s\n", strcat(first_name, last_name));
    printf("%d\n", strcmp(first_name, another_string));
    if (strcmp(first_name, another_string) == 0)
    {
        printf("Both Strings are equal\n");
    }
    else
    {
        printf("Both Strings are not equal\n");
    }
    printf("first_name: %s\n", first_name);
    printf("last_name: %s\n", last_name);
    printf("another_string: %s\n", another_string);
}