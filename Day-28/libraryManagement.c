#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d",&b.id);

    printf("Enter Book Name: ");
    scanf("%s",b.name);

    printf("Enter Author Name: ");
    scanf("%s",b.author);

    printf(" \n Book Details length");
    printf("ID : %d length",b.id);
    printf("Book : %s length",b.name);
    printf("Author : %s length",b.author);

    return 0;
}