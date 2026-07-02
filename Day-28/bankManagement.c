#include <stdio.h>

int main() {

    float balance = 5000;
    int choice;
    float amount;

    do{
        printf("\n1.Balance");
        printf("\n2.Deposit");
        printf("\n3.Withdraw");
        printf("\n4.Exit");

        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice){

        case 1:
            printf("Balance = %.2f",balance);
            break;

        case 2:
            scanf("%f",&amount);
            balance += amount;
            break;

        case 3:
            scanf("%f",&amount);

            if(amount<=balance)
                balance-=amount;
            else
                printf("Insufficient Balance");

            break;

        }

    }while(choice!=4);

    return 0;
}