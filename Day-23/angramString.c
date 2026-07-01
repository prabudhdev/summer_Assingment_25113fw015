#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagram");
        return 0;
    }

    for(int index = 0; str1[index] != '\0'; index++) {
        count1[(int)str1[index]]++;
        count2[(int)str2[index]]++;
    }

    for(int index = 0; index < 256; index++) {
        if(count1[index] != count2[index]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}