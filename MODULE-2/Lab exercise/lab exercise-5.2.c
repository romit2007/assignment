#include<stdio.h>
#include<conio.h>
int main()
{
    int sellprice, costprice, profit, loss;
    printf("\n Enter cost price: ");
    scanf("%d",&costprice);

    printf("\n Enter sell price: ");
    scanf("%d",&sellprice);

    if(sellprice > costprice)
    {
        profit = sellprice - costprice;
        printf("\n Profit is: %d",profit);
    }
    else if(costprice > sellprice)
    {
        loss = costprice - sellprice;
        printf("\n Loss is: %d",loss);
    }
    else
    {
        printf("\n No profit no loss");
    }

    
}