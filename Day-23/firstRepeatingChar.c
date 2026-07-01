#include <stdio.h>

int main() {
    char word[100];
    int idx, step;

    printf("Enter string: ");
    scanf("%s", word);

    for(idx = 0; word[idx] != '\0'; idx++) {
        for(step = idx + 1; word[step] != '\0'; step++) {
            if(word[idx] ==word[step]) {
                printf("First Repeating Character = %c", word[idx]);
                return 0;
            }
        }
    }

    printf("No repeating character");

    return 0;
}