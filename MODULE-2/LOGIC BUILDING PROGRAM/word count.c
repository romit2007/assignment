#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], longest[50], current[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    gets(str); 

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            current[j++] = str[i]; 
            currLen++;
        }
        else
        {
            current[j] = '\0'; 

            if (currLen > maxLen)
            {
                maxLen = currLen;
                strcpy(longest, current);
            }

            j = 0;
            currLen = 0;
        }
        i++;
    }

    
    current[j] = '\0';
    if (currLen > maxLen)
    {
        maxLen = currLen;
        strcpy(longest, current);
    }

    printf("\nLongest word: %s\n", longest);
    printf("Length of longest word: %d\n", maxLen);

    return 0;
}
