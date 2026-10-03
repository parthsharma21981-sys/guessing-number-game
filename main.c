 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int randomnumber = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed = 0;

    while (guessed != randomnumber) {

        printf("Guess the number: ");
        scanf("%d", &guessed);

        if (guessed > randomnumber) {
            printf("Lower the number\n");
        }
        else if (guessed < randomnumber) {
            printf("Higher the number\n");
        }

        no_of_guesses++;
    }

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}