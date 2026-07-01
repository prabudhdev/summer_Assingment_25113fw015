#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common Characters: ");

    for(int iter = 0; str1[iter] != '\0'; iter++) {

        int printed = 0;

        for(int tertiary = 0; tertiary < iter; tertiary++)
            if(str1[iter] == str1[tertiary])
                printed = 1;

        if(printed)
            continue;

        for(int jdx = 0; str2[jdx] != '\0'; jdx++) {

            if(str1[iter] == str2[jdx]) {
                printf("%c ", str1[iter]);
                break;
            }
        }
    }

    return 0;
}