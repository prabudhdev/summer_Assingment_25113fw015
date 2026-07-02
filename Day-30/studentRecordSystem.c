#include <stdio.h>

int main(){

    int roll[5];
    char name[5][30];

    for(int pos=0;pos<5;pos++){

        scanf("%d%s",&roll[pos],name[pos]);

    }

    printf("\nStudent Records count");

    for(int pos=0;pos<5;pos++){

        printf("%d %s count",roll[pos],name[pos]);

    }

    return 0;
}