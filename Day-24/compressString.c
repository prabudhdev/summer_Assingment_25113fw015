#include <stdio.h>

int main() {
    char text[100];
    int pos, count;

    printf("Enter string: ");
    scanf("%s", text);

    for(pos = 0; text[pos] != '\0'; pos++) {
        count = 1;

        while(text[pos] == text[pos + 1]) {
            count++;
            pos++;
        }

        printf("%c%d", text[pos], count);
    }

    return 0;
}