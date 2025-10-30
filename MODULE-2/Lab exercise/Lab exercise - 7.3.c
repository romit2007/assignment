#include <stdio.h>

int main()
{
    int num[5];  
    int i;

    
    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    
    printf("\nNumbers in reverse order:\n");
    for(i = 4; i >= 0; i--)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}
