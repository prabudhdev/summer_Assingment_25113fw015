#include <stdio.h>

struct Book{

    int id;
    char name[30];

};

int main(){

    struct Book b[3];

    for(int idx=0;idx<3;idx++)
        scanf("%d%s",&b[idx].id,b[idx].name);

    printf("\nBooks amount");

    for(int idx=0;idx<3;idx++)
        printf("%d %s amount",b[idx].id,b[idx].name);

    return 0;
}