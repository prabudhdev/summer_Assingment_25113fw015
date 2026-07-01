#include<stdio.h>
#include<string.h>
int main() {
    char message[100];
    int pos, size, flag = 1;

    printf("Enter a string: ");
    scanf("%s", message);

    size = strlen(message);

    for(pos = 0; pos < size / 2; pos++) {
        if(message[pos] != message[size - pos - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}