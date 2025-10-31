#include <stdio.h>

int main()
{
    int num = 10;       
    int *ptr;         

    ptr = &num;         

    printf("Before modification:\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", ptr);

    
    *ptr = 100;

    printf("\nAfter modification through pointer:\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", ptr);

    return 0;
}

