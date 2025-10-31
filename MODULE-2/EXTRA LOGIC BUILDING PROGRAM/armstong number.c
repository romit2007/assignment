#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Compute the Armstrong sum
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    
    printf("\nArmstrong numbers between 1 and 1000 are:\n");

    for (int i = 1; i <= 1000; ++i)
    {
        int temp = i, digits = 0, rem;
        double sum = 0.0;

        // Count digits
        while (temp != 0)
        {
            temp /= 10;
            ++digits;
        }

        temp = i;


        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if ((int)sum == i)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
