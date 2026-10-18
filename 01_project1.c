#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guessed;
    int no_of_guesses = 0;

    printf("--- Guess The Number Game ---\n");
    printf("I think number between 1 to 100!\n\n");

    do{
        printf("Let's guess: ");
        scanf("%d", &guessed);
        no_of_guesses++;

        if(guessed > randomNumber){
            printf("Lower number please!\n");
        }
        else if(guessed < randomNumber){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats! You guessed the number in %d tries!\n", no_of_guesses);
        }
    }while(guessed != randomNumber);
    return 0;
}