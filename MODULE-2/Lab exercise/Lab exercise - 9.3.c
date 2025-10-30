#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10];
    int i,max;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) 
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    max = arr[0]; 

    for(i = 0; i < 10; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}

    

