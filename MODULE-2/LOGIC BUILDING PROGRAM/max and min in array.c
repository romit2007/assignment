#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10], i, j, temp;
    int max, min;

    
    for(i=0; i<10; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    
    for(j=0; j<9; j++)
    {
        for(i=0; i<9-j; i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    
    printf("\nAscending order: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }


    max = arr[0];
    min = arr[0];

    for(i=1; i<10; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("\nMaximum number is: %d", max);
    printf("\nMinimum number is: %d", min);

    return 0;
}
