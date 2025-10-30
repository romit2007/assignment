#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2],b[2][2],result[2][2];
    int i,j,k;

    printf("Enter 1st matrix 2*2: ");

    for(i=0;i<2;i++)
    {
        
       for(j=0;j<2;j++)
       {
            scanf("%d",&a[i][j]);
       }
    }

     printf("Enter 2nd matrix 2*2: ");

    for(i=0;i<2;i++)
    {
        
       for(j=0;j<2;j++)
       {
            scanf("%d",&b[i][j]);
       }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                result[i][j]=a[i][k]+b[j][k];
            }
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("result : %d",result[i][j]);
        }
         printf("\n");
    }
    
    


}