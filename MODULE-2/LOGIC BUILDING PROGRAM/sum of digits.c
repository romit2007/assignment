#include<stdio.h>
#include<conio.h>
int main()
{
    int num, rem = 0, sum = 0;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    
    printf("Sum of all digits: %d", sum);
    
    
    return 0;
}
