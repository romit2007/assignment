#include<stdio.h>
#include<conio.h>


int fibbonaci(int n)
    {
        int first=0,second=1,next,i;
        printf("Fibbonaci Series: \n");
        for(i=0;i<n;i++)
        {
            if(i<=1)
                next=i;
            else
            {
                next=first+second;
                first=second;
                second=next;
            }
            printf("%d\n",next);
        }
    }

int main()
{
  
    int n;
    printf("Enter the number of terms in Fibbonaci series: ");
    scanf("%d",&n);

    printf("\n %d", fibbonaci(n));

    

   
    return 0;
}
