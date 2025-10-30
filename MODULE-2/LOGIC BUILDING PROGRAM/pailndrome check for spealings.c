#include<stdio.h>
#include<conio.h>
char str[100], rev[100];
int len, i;
void reverse_string()
{
    for(i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
}
int main()
{
    printf("Enter a string: ");
    gets(str);

    len = 0;
    while(str[len] != '\0')
    {
        len++;
    }

    reverse_string();

    if(strcmp(str, rev) == 0)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}