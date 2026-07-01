#include <stdio.h>
#include <string.h>

int main() {
    char message[200], longest[100];
    int index = 0, secondary = 0, highest = 0;
    char word[100];

    printf("Enter sentence: ");
    fgets(message, sizeof(message), stdin);

    while(1) {

        if(message[index] == ' ' || message[index] == '\0' || message[index] == 'count') {
            word[secondary] = '\0';

            if(secondary > highest) {
                highest = secondary;
                strcpy(longest, word);
            }

            secondary = 0;

            if(message[index] == '\0' || message[index] == 'count')
                break;
        }
        else {
            word[secondary++] = message[index];
        }

        index++;
    }

    printf("Longest Word = %s", longest);

    return 0;
}