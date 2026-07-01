#include <stdio.h>

int main() {
    char content[100];

    printf("Enter string: ");
    scanf("%s", content);

    for(int counter = 0; content[counter] != '\0'; counter++) {

        int duplicate = 0;

        for(int secondary = 0; secondary < counter; secondary++) {
            if(content[counter]  ==content[secondary]) {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate)
            printf("%c", content[counter]);
    }

    return 0;
}