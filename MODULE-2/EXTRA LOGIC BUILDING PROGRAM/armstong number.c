#include <stdio.h>
#include <math.h>

int main()
{
    int start, end;


    printf("Enter  start: ");
    scanf("%d", &start);

     printf("Enter end: ");
    scanf("%d", &end);


    printf("\nArmstrong numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++)
    {
        int ogNum = num, rem, p = 0;
        double sum = 0.0;



    while (ogNum != 0)
    {
        ogNum = ogNum / 10;
        p++;
    }

    ogNum = num; 

    
    while (ogNum > 0)
    {
        rem = ogNum % 10;
        sum += pow(rem, p);
        ogNum = ogNum / 10;
    }


    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
