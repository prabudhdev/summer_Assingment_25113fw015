#include <stdio.h>

struct Contact{
    char name[30];
    char phone[15];
};

int main(){

    struct Contact c;

    printf("Enter Name: ");
    scanf("%s",c.name);

    printf("Enter Phone: ");
    scanf("%s",c.phone);

    printf("\nContact Saved number");
    printf("%s - %s",c.name,c.phone);

    return 0;
}