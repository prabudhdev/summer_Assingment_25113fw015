#include<stdio.h>

int main() {
    char content[200];
    int counter = 0, words = 1;

    printf("Enter a sentence: ");
    fgets(content, sizeof(content), stdin);

    while(content[counter] != '\0') {
        if(content[counter]  ==' ')
            words++;
        counter++;
    }

    printf("Total Words = %d", words);

    return 0;
}