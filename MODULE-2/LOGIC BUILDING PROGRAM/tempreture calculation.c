#include<stdio.h>
#include<conio.h>
int main()
{
    float celcius;

    printf("\n Enter celcuis: ");
    scanf("%f",&celcius);

    if(celcius<0)
    {
        printf("\n freezing weather");

    }
    else if(celcius>=0 && celcius<10)
    {
        printf("\n very cold weather");
    }
    else if(celcius>=10 && celcius<20)
    {
        printf("\n cold weather");
    }
    else if(celcius>=20 && celcius<30)
    {
        printf("\n normal in temp");
    }
    else if(celcius>=30 && celcius<40)
    {
        printf("\n hot");
    }
    else
    {
        printf("\n very hot");
    }



    return 0;
}