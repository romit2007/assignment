#include<stdio.h>
int main()
{
    int num1,num2,b,add,sub,multi,divison;

    printf("Enter num1: ");
    scanf("%d",&num1);

    printf("Enter num2: ");
    scanf("%d",&num2);

    add=num1+num2;
    printf("\n %d + %d = %d",num1,num2,add);

    sub=num1-num2;
    printf("\n %d - %d = %d",num1,num2,sub);

    multi=num1*num2;
    printf("\n %d * %d = %d",num1,num2,multi);

    divison=num1/num2;
    printf("\n %d / %d = %d",num1,num2,divison);

    b=num1++;
    printf("\n %d",num1);

    b=++num2;
    printf("\n %d",num2);

    b=num1--;
    printf("\n %d",num1);

    b=--num2;
    printf("\n %d",num2);

    int and = num1 & num2;
    int or  = num1 | num2;
    int xor = num1 ^ num2;
    int shl = num1 << 1;    
    int shr = num2 >> 1;    
    int not1 = ~num1;  

    printf("\n %d & %d = %d", num1, num2, and);
    printf("\n %d | %d = %d", num1, num2, or);
    printf("\n %d ^ %d = %d", num1, num2, xor);
    printf("\n %d << 1 = %d", num1, shl);
    printf("\n %d >> 1 = %d", num2, shr);
    printf("\n ~%d = %d", num1, not1);

    int max = (num1 > num2) ? num1 : num2;
    int min = (num1 < num2) ? num1 : num2;

    printf("\n max(%d,%d) = %d", num1, num2, max);
    printf("\n min(%d,%d) = %d", num1, num2, min);


}