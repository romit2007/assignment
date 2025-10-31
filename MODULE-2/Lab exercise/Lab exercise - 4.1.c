#include<stdio.h>
int main()
{
    float PI,r,area,circumfence;

    printf("\n Enter radious of circcle: ");
    scanf("%f",&r);

    area=PI*r*r;
    printf("\n Area of circle : %f",area);

    circumfence=2*PI*r;
    printf("\n Circumfence of circle :%f",circumfence);
    
}

