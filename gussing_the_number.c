#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int secret_number, guess;
    int attempts = 0;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    secret_number = rand() % 100 + 1;

    printf("NOW START THE GAME OF GUSSING NUMBERS!!\n");
    printf("Select the number between 1 to 100 & try to guess it!!\n");
    //LOOP
    do
    {
        printf("ENTER YOUR NUMBER:");
        scanf("%d", &guess);
        attempts++;
         // CONDITION
        if(guess > secret_number){
            printf("It is High,Try low.\n");
        }
        else if(guess < secret_number){
            printf("It is Low,Try high.\n");
        }
        else{
            printf("Congratulations!!\n");
        }    

    } 
    while (guess != secret_number);
    printf("YOU GUESS THE NUMBER IN %d ATTEMPTS", attempts);
    
}
