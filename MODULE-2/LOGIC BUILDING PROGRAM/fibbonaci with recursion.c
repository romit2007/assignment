#include<stdio.h>
#include<conio.h>
int fibbonaci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibbonaci(n-1) + fibbonaci(n-2);
}
int main()
{
    int n, i;
    printf("Enter number: ");
    scanf("%d",&n);

    printf("Fibbonaci Series:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", fibbonaci(i));
    }

    return 0;
}