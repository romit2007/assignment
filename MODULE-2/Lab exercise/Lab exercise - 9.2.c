#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5], i, j, temp;

    
    for(i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] < arr[j])   
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    printf("\nNumbers in Descending Order:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}
