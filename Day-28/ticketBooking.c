#include <stdio.h>

int main() {

    int seats = 50;
    int book;

    printf("Available Seats = %d count\n",seats);

    printf("Enter seats to book: ");
    scanf("%d",&book);

    if(book<=seats){
        seats-=book;
        printf("Booking Successful count");
        printf("Remaining Seats = %d",seats);
    }
    else{
        printf("Seats Not Available");
    }

    return 0;
}