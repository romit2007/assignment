#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,ans,range;

    printf("\n Enter a number: ");
    scanf("%d",&num);
    
    printf("\n Enter range: ");
    scanf("%d",&range);

    for(i=1;i<=range;i++)
    {
        ans = num * i;
        printf("\n %d x %d = %d",num,i,ans);
    }
    


}
