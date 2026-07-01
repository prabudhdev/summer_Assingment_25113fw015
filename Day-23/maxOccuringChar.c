#include <stdio.h>

int main() {
    char message[100];
    int freq[256] = {0};
    int maximum = 0;
    char ch;

    printf("Enter string: ");
    fgets(message, sizeof(message), stdin);

    for(int iter = 0; message[iter] != '\0'; iter++)
        freq[(int)message[iter]]++;

    for(int iter = 0; iter < 256; iter++) {
        if(freq[iter] > maximum) {
            maximum = freq[iter];
            ch = iter;
        }
    }

    printf("Maximum occurring character = %c", ch);

    return 0;
}