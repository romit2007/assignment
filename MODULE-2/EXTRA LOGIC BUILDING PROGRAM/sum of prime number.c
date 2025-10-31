#include<stdio.h>
#include<conio.h>
int prime(int num)
{
    if(num<=1)
    {
        return 0; 
    }
    else
    {
        for(int i=2; i<=num/2; i++)
        {
            if(num%i == 0)
            {
                return 0; 
            }
        }
        return 1; 
    }
}
int main()
{
    int n,i,sum=0;

    printf("\n Enter number: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(prime(i))
        {
            printf("\n %d",i);
            sum+=i;
        }
    }

    printf("\n sum of prime number : %d",sum);


}
