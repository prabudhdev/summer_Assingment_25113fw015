#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int counter, jdx, count;

    printf("Enter string: ");
    scanf("%s", text);

    for(counter = 0; text[counter] != '\0'; counter++) {
        count = 0;

        for(jdx = 0; text[jdx] != '\0'; jdx++) {
            if(text[counter] == text[jdx])
                count++;
        }

        if(count == 1) {
            printf("First Non-Repeating Character = %c", text[counter]);
            return 0;
        }
    }

    printf("No non-repeating character");

    return 0;
}