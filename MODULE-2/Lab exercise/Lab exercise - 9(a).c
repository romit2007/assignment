#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100],i;

    for(i=1;i<=5;i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr[i]);
    }

    
    for(i=1;i<=5;i++)
    {
        printf("\n %d",arr[i]);
    }
}