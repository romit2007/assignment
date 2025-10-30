#include<stdio.h>
int main()
{
    int n[10],i;

    for(i=1;i<=10;i++)
    {
        printf("Enter number: ");
        scanf("%d",&n[i]);
    }
    
    for(i=1;i<=10;i++)
    {
        if(n[i]%2==0)
        {
        printf("\n %d Even",n[i]);
        }
         else
       {
        printf("\n %d odd",n[i]);
    
       }

       int sum = n[i] + n[i + 1];
       printf("\n%d + %d = %d", n[i], n[i + 1], sum);
    }
    

}