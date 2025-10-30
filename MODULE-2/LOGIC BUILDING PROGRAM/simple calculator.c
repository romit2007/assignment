#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;

    float num1,num2,add,sub,multi,divison;

    

    printf("\n Enter num1: ");
    scanf("%f",&num1);

    printf("\n Enter num2: ");
    scanf("%f",&num2);

    printf("\n press1 for add \n press2 for sub \n press3 for multi \n press4 for divison \n");
    printf("\n Enter choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            add=num1+num2;
            printf("\n %f + %f = %f",num1,num2,add);
            break;

        case 2:
            sub=num1-num2;
            printf("\n %f - %f = %f",num1,num2,sub);
            break;

        case 3:
            multi=num1*num2;
            printf("\n %f * %f = %f",num1,num2,multi);
            break;

        case 4:
            divison=num1/num2;
            printf("\n %f / %f = %f",num1,num2,divison);
            break;

        default:
            printf("\n Invalid choice");
            break;
        
    }


    


}