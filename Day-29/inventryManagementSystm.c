#include <stdio.h>

struct Item{

    int id;
    char name[50];
    int quantity;

};

int main(){

    struct Item idx;

    scanf("%d%s%d",&idx.id,idx.name,&idx.quantity);

    printf("ID:%d count",idx.id);
    printf("Item:%s count",idx.name);
    printf("Qty:%d",idx.quantity);

    return 0;
}