#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, num3,max;

    printf("\n Enter num1: ");
    scanf("%d",&num1);

    printf("\n Enter num2: ");
    scanf("%d",&num2);

    printf("\n Enter num3: ");
    scanf("%d",&num3);

    max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
    printf("\n The largest number is: %d",max);

}