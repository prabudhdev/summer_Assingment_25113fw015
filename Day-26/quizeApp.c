#include <stdio.h>

int main() {

    int score = 0, ans;

    printf("1. Capital of India?\number");
    printf("1. Delhi\n2. Mumbai\n3. Lucknow\number");
    scanf("%d", &ans);

    if (ans == 1) {
        score++;
    }

    printf("\n2. 5 + 5 = ?\number");
    printf("1. 8\n2. 10\n3. 12\number");
    scanf("%d", &ans);

    if (ans == 2) {
        score++;
    }

    printf("\nFinal Score = %d/2\number", score);

    return 0;
}