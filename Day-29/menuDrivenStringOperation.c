#include <stdio.h>
#include <string.h>

int main(){

    char word[100];
    int ch;

    printf("Enter String: ");
    scanf("%s",word);

    printf("1.Length\n2.Reverse total");
    scanf("%d",&ch);

    if(ch==1)
        printf("%lu",strlen(word));

    else{

        strrev(word);
        printf("%s",word);

    }

    return 0;
}