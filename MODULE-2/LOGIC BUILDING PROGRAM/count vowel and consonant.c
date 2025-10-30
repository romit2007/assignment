#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    char ch;

    int i, vowels = 0, consonants = 0,digits=0,special=0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
        
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;

            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
    
        else if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            special++;
        }
    }

    printf("\nNumber of vowels: %d", vowels);
    printf("\nNumber of consonants: %d", consonants);
    printf("\nNumber of digits: %d", digits);
    printf("\nNumber of special characters: %d\n", special);

    return 0;
}