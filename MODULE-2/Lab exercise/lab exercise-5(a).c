#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter number: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("\n %d is even number",num);
    }
    else
    {
        printf("\n %d is odd number",num);
    }
    
}