#include <stdio.h>
#include <conio.h>

int main()
{
    char str[100], str1[100];

    printf("Enter string: ");
    gets(str);

    strcpy(str1, str);      
    strrev(str);       

    printf("Reversed string is: %s\n", str);

    if (strcmp(str, str1) == 0) 
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

    
