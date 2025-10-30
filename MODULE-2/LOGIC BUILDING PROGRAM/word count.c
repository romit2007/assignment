#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    int i,words=0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            words++;
        }
    }

    
    if (i > 0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t')
    {
        words++;
    }

    printf("\nNumber of words: %d\n", words);

    return 0;
}