#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,ans;

    printf("\n Enter a number: ");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        ans = num * i;
        printf("\n %d x %d = %d",num,i,ans);
    }
    

}