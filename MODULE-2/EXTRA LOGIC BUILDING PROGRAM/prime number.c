#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter number: ");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("\n Not a prime number");
    }
    else
    {
        int Primenumber = 1;

        for(int i=2; i<=num/2; i++)
        {
            if(num%i == 0)
            {
                Primenumber = 0; 
                break;
            }
        }

        if(Primenumber)
        {
            printf("\n %d is a prime number", num);
        }
        else
        {
            printf("\n %d is not a prime number", num);
        }
    }
}