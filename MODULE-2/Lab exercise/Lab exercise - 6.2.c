#include<stdio.h>
int main()
{
    int num=64728,reversed_num=0,remainder;

   

    while (num!=0)
    {
        remainder=num%10;
        reversed_num=reversed_num*10+remainder;
        num/=10;

    }
    
         
    printf("Reversed num = %d\n",reversed_num);
  
    
}