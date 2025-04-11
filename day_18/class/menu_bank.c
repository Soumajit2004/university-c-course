#include <stdio.h>
#include <stdlib.h>

float balance = 0.0;

void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    
    balance += amount;
    printf("Deposited %.2f. New balance: %.2f\n", amount, balance);
}

void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (balance >= amount) {
        balance -= amount;
        printf("Withdrew %.2f. New balance: %.2f\n", amount, balance);
    } else {
        printf("Insufficient balance.\n");
    }
}

void check_balance() {
    printf("Current balance: %.2f\n", balance);
}

int main() {
    int choice;

    while (1) {
        printf("\nBank Menu:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                check_balance();
                break;
            case 4:
                printf("Thank you for using our banking system.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}