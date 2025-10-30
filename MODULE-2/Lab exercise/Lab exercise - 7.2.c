#include <stdio.h>
#include <math.h>

int main()
{
    int rn, num, remainder, n = 0,temp;
    float sum = 0.0;

    printf("Enter your value: ");
    scanf("%d", &rn);

    num = rn;

    
    for (temp = num; temp != 0; temp = temp / 10)
    {
        n++;
    }

    for (num = rn; num != 0; num = num / 10)
    {
        remainder = num % 10;
        sum += pow(remainder, n);
    }

    
    if (sum == rn)
        printf("\nGiven number is Armstrong");
    else
        printf("\nGiven number is not Armstrong");

    return 0;
}
