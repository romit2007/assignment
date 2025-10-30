#include<stdio.h>
#include<conio.h>
int palindrome(int num)
{
    int reversed = 0, original, remainder;
    original = num;

    while(num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if(original == reversed)
        return 1; 
    else
        return 0; 
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(palindrome(num))
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);

    return 0;
}