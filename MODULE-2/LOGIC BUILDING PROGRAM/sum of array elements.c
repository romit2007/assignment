#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0,arr[100];

    printf("Enter number: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("Enter element: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("Sum of array elements: %d",sum);
}