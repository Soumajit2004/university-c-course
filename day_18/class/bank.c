#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    char name[50];
    int acc_no;
    float balance;
} BankAccount;

void printAccount(const BankAccount *account) {
    printf("Account Holder: %s\n", account->name);
    printf("Account Number: %d\n", account->acc_no);
    printf("Balance: %.2f\n", account->balance);
}


int main() {
    BankAccount account = {"Soumajit Ghosh", 123456, 1000.50};

    printAccount(&account);
    return 0;
}