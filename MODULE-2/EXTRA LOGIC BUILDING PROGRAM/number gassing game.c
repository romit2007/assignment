#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, guess,attempts=0,i;


    srand (time(0));
    num = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");


  for(i=1;i<=10;i++)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess < num)
        {
            printf("Too low! Try again.\n");
        }
        else if(guess > num)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", num, attempts);
            break;
        }
    }
    




}