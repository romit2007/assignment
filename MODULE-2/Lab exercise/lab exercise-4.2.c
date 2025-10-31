#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,h,area;

    printf("\n Enter base: ");
    scanf("%d",&b);

    printf("\n Enter height: ");
    scanf("%d",&h);

    printf("\n Enter side a: ");
    scanf("%d",&a);

    area = (b*h)/2;
    printf("\n Area of triangle is: %d",area);    

    area = a*a;
    printf("\n Area of square is: %d",area);

    area=6*a*a;
    printf("\n Area of cube is: %d",area);


    
}