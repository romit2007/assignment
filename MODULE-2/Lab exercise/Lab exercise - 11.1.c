#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[100];
    int i,length=0;

    printf("Enter string: ");
    gets(str1);

    for(i=0;str1[i]!='\0';i++)
    {
        length++;
    }

    printf("Length of string: %d",length);
}