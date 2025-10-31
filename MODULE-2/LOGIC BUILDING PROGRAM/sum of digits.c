#include<stdio.h>
#include<conio.h>
int main()
{
    int num, rem = 0, sum = 0,rev=0;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        rem = num % 10;
        sum += rem;
        rev=rev*10+rem;
        num = num / 10;
    }
    
    printf("Sum of all digits: %d", sum);
    printf("\n Reversed digit: %d",rev);
    
    
    return 0;
}
