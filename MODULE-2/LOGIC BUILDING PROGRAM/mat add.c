#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2],b[2][2];

    printf("Enter elements of first matrix:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum of two matrices:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;

    
    
    
}