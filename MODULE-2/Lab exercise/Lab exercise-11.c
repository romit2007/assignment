#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[100],str2[100];

    printf("Enter str1: ");
    gets(str1);

    printf("Enter str2: ");
    gets(str2);

    printf("containted string: %s",strcat(str1,str2));

    printf("\n length of array: %d",strlen(str1));
    printf("\n length of array: %d",strlen(str2));
    
}