#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0));
    int randomNumber = (rand() % 100);
    int noOfGuesses = 0;
    int guessed;

    
    
    do
    {
        printf("Guess the number : ");
        scanf("%d", &guessed);

        if(guessed > randomNumber){
            printf("Guessed lower number\n");
        } else if (guessed < randomNumber){
            printf("Guessed higher number\n");
        }

        noOfGuesses++;

    } while (guessed != randomNumber);
    
    printf("You guessed the number in %d guesses", noOfGuesses);
    
    return 0;
}