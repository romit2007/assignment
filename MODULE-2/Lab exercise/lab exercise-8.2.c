#include<stdio.h>
#include<conio.h>
char reverse(char str[])
{
    int i, length = 0;
    char rev[100];

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[i] = '\0';

    printf("Reversed string is: %s\n", rev);

    if(strcmp(str, rev) == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    reverse(str);

    return 0;
}
