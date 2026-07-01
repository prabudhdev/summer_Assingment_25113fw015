#include <stdio.h>

int main() {

    int secret = 25;
    int guess;

    printf("Guess the Number (1-50): ");

    while(1) {

        scanf("%d",&guess);

        if(guess == secret) {
            printf("Correct Guess!");
            break;
        }

        else if(guess < secret)
            printf("Too Low. Try Again: ");

        else
            printf("Too High. Try Again: ");

    }

    return 0;
}