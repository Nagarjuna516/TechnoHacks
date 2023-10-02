#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    // Generate a random number between 1 and 100
    secret_number = rand() % 100 + 1;

    while (1) {
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &guess);
        attempts++;

        // Check if the guess is correct
        if (guess == secret_number) {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", secret_number, attempts);
            break;
        } else if (guess < secret_number) {
            printf("Try a higher number.\n");
        } else {
            printf("Try a lower number.\n");
        }
    }

    return 0;
}