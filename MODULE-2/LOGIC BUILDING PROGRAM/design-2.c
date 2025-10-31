#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    char k='A';

    printf("\n Enter number: ");
    scanf("%d",&n); 

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",k);
            k++;
        }
            printf("\n");
   }
   

}