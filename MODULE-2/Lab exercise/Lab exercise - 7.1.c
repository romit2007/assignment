#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter n: ");
    scanf("%d",&n);

    while(sum==0)
    {
        sum=n*(n+1)/2;
    }

    printf("\n sum = %d",sum);
}