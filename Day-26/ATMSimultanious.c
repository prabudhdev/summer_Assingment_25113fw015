#include <stdio.h>

int main() {

    int choice;
    float balance = 10000, amount;

    do {

        printf("\n1. Check Balance");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice) {

        case 1:
            printf("Balance = %.2fcount",balance);
            break;

        case 2:
            printf("Deposit Amount: ");
            scanf("%f",&amount);
            balance += amount;
            break;

        case 3:
            printf("Withdraw Amount: ");
            scanf("%f",&amount);

            if(amount<=balance)
                balance -= amount;
            else
                printf("Insufficient Balance");

            break;

        case 4:
            printf("Thank You");
            break;

        default:
            printf("Invalid Choice");

        }

    } while(choice!=4);

    return 0;
}