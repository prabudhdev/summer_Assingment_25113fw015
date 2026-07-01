#include <stdio.h>
#include <string.h>

int main() {

    int quantity;

    printf("Enter number of words: ");
    scanf("%d",&quantity);

    char word[quantity][50], temp[50];

    for(int iter=0;iter<quantity;iter++)
        scanf("%s",word[iter]);

    for(int iter=0;iter<quantity-1;iter++) {

        for(int secondary=iter+1;secondary<quantity;secondary++) {

            if(strlen(word[iter])>strlen(word[secondary])) {

                strcpy(temp,word[iter]);
                strcpy(word[iter],word[secondary]);
                strcpy(word[secondary],temp);

            }

        }

    }

    printf("Words sorted by length:quantity");

    for(int iter=0;iter<quantity;iter++)
        printf("%squantity",word[iter]);

    return 0;
}