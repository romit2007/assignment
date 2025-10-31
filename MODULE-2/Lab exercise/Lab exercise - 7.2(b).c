#include <stdio.h>
#include <math.h>

int main()
{
    int rn, num, remainder, n = 0;
    float sum = 0.0;

    printf("Enter your value: ");
    scanf("%d", &rn);

    num = rn;

    
    int temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        n++;
    }

    
    num = rn;
    while (num != 0)
    {
        remainder = num % 10;
        sum += pow(remainder, n);
        num = num / 10;
    }

    
    if (sum == rn)
        printf("\nGiven number is Armstrong");
    else
        printf("\nGiven number is not Armstrong");

    return 0;
}
