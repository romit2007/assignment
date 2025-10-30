#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    int ans=1,i;

    if(n<=0)
    {
        printf("Invalid number for factorial number");
        return 0;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            ans=ans*i;
        }
        return ans;
    }
}
int main()
{
    int num,ans;

    printf("Enter number: ");
    scanf("%d",&num);

    ans=fact(num);

    printf("\n Factorial num: %d",ans);
}