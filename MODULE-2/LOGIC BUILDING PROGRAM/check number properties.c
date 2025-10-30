#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("\n even number",num);
    }
    else
    {
        printf("\n odd number",num);
    }

    if(num>0)
    {
        printf("\n positive number",num);
    }
    else if(num<0)
    {
        printf("\n negative number",num);
    }
    else
    {
        printf("\n zero",num);
    }

    if(num%3==0 && num%5==0)
    {
        printf("\n divisible by 3 and 5",num);
    }
    else
    {
        printf("\n not divisible by 3 and 5",num);
    }


}
