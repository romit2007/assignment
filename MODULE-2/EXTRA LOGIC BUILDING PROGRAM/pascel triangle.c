#include<stdio.h>
#include<conio.h>
int pascel_triangle(int i,int j)
{
    if(j==0 || j==i)
        return 1;
    else
        return pascel_triangle(i-1,j-1)+pascel_triangle(i-1,j);
}
int main()
{
    int n,i,j,k;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%d ",pascel_triangle(i,k));
        }

        printf("\n");
    }
    return 0;
}

    

