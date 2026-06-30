#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0') {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            switch(ch) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    vowels++;
                    break;
                default:
                    consonants++;
            }
        }

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}