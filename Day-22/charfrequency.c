#include <stdio.h>

int main() {
    char content[100], ch;
    int pos, count = 0;

    printf("Enter string: ");
    fgets(content, sizeof(content), stdin);

    printf("Enter character: ");
    scanf("%c", &ch);

    for(pos = 0; content[pos] != '\0'; pos++) {
        if(content[pos]  ==ch)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}