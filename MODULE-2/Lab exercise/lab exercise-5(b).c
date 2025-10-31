#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;

    printf("\n press 1 for january \n press 2 for february \n press 3 for march \n press 4 for april \n press 5 for may \n press 6 for june \n press 7 for july \n press 8 for august \n press 9 for september \n press 10 for october \n press 11 for november \n press 12 for december \n");
    printf("\n Enter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\n january ");
            break;
        case 2:
            printf("\n february");
            break;
        case 3:
            printf("\n march ");
            break;
        case 4:
            printf("\n april");
            break;
        case 5:
            printf("\n may ");
            break;
        case 6:
            printf("\n june ");
            break;
        case 7:
            printf("\n july");
            break;
        case 8:
            printf("\n august");
            break;
        case 9:
            printf("\n september");
            break;
        case 10:
            printf("\n october ");
            break;
        case 11:
            printf("\n november ");
            break;
        case 12:
            printf("\n december");
            break;
        default:
            printf("\n invalid choice");
    }
}