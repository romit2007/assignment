#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;

    printf("\n Enter marks");
    scanf("%d",&marks);

    if(marks>=90)
    {
        printf("\n grade A");

    }
    else if(marks>=80)
    {
        printf("\n grade B");

    }
    else if(marks>=70)
    {
        printf("\n grade C");

    }
    else if(marks>=60)
    {
        printf("\n grade D");

    }
    else if(marks>=33)
    {
        printf("\n grade E");

    }
    else
    {
        printf("\n grade F");

    }


}