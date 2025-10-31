#include<stdio.h>
void string(char str1[], char str2[],char result[])
{
    int i,j;
    for(i=0; str1[i]!='\0'; i++)
    {
        result[i]=str1[i];
    }
    for(j=0; str2[j]!='\0'; j++,i++)
    {
        result[i]=str2[j];
    }
    result[i]='\0';
    printf("Concatenated string is: %s\n", result);
}
int main()
{
    char str1[100], str2[100], result[200];
    printf("Enter first string: ");
    gets(str1);


    printf("Enter second string: ");
    gets(str2);


    printf("\n concatenation of two string \n");
    string(str1, str2, result);

    
    return 0;
}