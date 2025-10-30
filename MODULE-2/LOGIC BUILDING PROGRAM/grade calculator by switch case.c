#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;

   printf("\n Enter marsks: ");
   scanf("%d",&marks);

    switch(marks/10)
    {
         case 10:
         case 9:
              printf("\n grade A");
              break;
    
         case 8:
              printf("\n grade B");
              break;
    
         case 7:
              printf("\n grade C");
              break;
    
         case 6:
              printf("\n grade D");
              break;
    
         case 5:
         case 4:
              printf("\n grade E");
              break;
    
         default:
              printf("\n grade F");
              break;
    }

}