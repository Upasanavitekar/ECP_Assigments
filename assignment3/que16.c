#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int magicNumber, guess;
    int maxAttempts = 10;
    int attempts = 0;

  
    srand(time(NULL));

   
    magicNumber = rand() % 1000 + 1;

    printf("Welcome to the 'Guess the Magic Number' game!\n");
    printf("I have selected a number between 1 and 1000.\n");
    printf("You have %d attempts to guess it.\n", maxAttempts);

    
    while (attempts < maxAttempts) 
	{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        
        if (guess == magicNumber) 
		{
            printf("Congrats! You won.\n");
            break;
        } 
		else if (guess < magicNumber) 
		{
            printf("Left\n"); 
        } 
		else 
		{
            printf("Right\n");
        }


        if (attempts == maxAttempts) 
		{
            printf("Sorry, you've used all your attempts. The magic number was %d.\n", magicNumber);
        }
    }

    return 0;
}

