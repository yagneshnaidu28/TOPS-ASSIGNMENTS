//Write a C program that implements a simple number guessing game. The program 
//should generate a random number between 1 and 100, and the user should guess the 
//number within a limited number of attempts.  
//• Challenge: Provide hints to the user if the guessed number is too high or too low. 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main() { 
    int secretNumber, guess, attempts = 5; 
 
    srand(time(0)); 
    secretNumber = rand() % 100 + 1; 
 
    printf("Welcome to the Number Guessing Game!\n"); 
    printf("I have generated a random number between 1 and 100.\n"); 
    printf("You have 5 attempts to guess it.\n"); 
 
    while (attempts > 0) { 
        printf("\nAttempts left: %d\n", attempts); 
        printf("Enter your guess: "); 
        scanf("%d", &guess); 
 
        if (guess == secretNumber) { 
            printf("Congratulations! You guessed the correct number: %d\n", secretNumber); 
            return 0; 
        } else if (guess > secretNumber) { 
            printf("Your guess is too high. Try again.\n"); 
        } else { 
            printf("Your guess is too low. Try again.\n"); 
        } 
 
        attempts--; 
    } 
 
    printf("\nSorry, you've run out of attempts.\n"); 
    printf("The secret number was: %d\n", secretNumber); 
 
    return 0; 
}