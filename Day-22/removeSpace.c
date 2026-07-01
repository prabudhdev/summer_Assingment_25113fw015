#include <stdio.h>

int main() {
    char message[100];
    int pos, step = 0;

    printf("Enter string: ");
    fgets(message, sizeof(message), stdin);

    for(pos = 0; message[pos] != '\0'; pos++) {
        if(message[pos] != ' ')
            message[step++] = message[pos];
    }

    message[step] = '\0';

    printf("After removing spaces:\n%s", message);

    return 0;
}