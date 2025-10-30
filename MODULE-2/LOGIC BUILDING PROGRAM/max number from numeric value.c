
#include<stdio.h>
int main()
{
    int num, max = 0, rem;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 0)  
        num = -num;

    while (num > 0)
    {
        rem = num % 10;   
        if (rem > max)    
        {
            max = rem;
        }
        num = num / 10;  
    }

    printf("Max digit: %d", max);
    return 0;
}