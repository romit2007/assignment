#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3,choice;

    printf("\n Enter num1: ");
    scanf("%d",&num1);

    printf("\n Enter num2: ");
    scanf("%d",&num2);

    printf("\n Enter num3: ");
    scanf("%d",&num3);


    if(num1 > num2 && num1 > num3)
    {
        printf("\n num1 is the largest");
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("\n num2 is the largest");
    }
    else
    {
        printf("\n num3 is the largest");
    }

    if(num1 < num2 && num1 < num3)
    {
        printf("\n num1 is the smallest");
    }
    else if(num2 < num1 && num2 < num3)
    {
        printf("\n num2 is the smallest");
    }
    else
    {
        printf("\n num3 is the smallest");
    }
     
    printf("\n press1 for largest number \n press2 for smallest number");
    printf("\n Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            if(num1 > num2 && num1 > num3)
            {
                printf("\n num1 is the largest");
            }
            else if(num2 > num1 && num2 > num3)
            {
                printf("\n num2 is the largest");
            }
            else
            {
                printf("\n num3 is the largest");
            }
            break;

        case 2:
            if(num1 < num2 && num1 < num3)
            {
                printf("\n num1 is the smallest");
            }
            else if(num2 < num1 && num2 < num3)
            {
                printf("\n num2 is the smallest");
            }
            else
            {
                printf("\n num3 is the smallest");
            }
            break;

        default:
            printf("\n Invalid choice");
            break;
    }



}