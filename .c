#include <stdio.h>
#include <stdlib.h>

// 1. Without Parameters & Without Return
void welcomeMessage() {
    printf("====================================\n");
    printf("  Welcome to ABC Bank ATM System ?? \n");
    printf("====================================\n");
}

// 2. With Parameters but No Return
void printBalance(int balance) {
    printf("Your Current Balance = ?%d\n", balance);
}

// 3. Without Parameters but With Return
int getInterestRate() {
    // Bank decides fixed interest rate, no input from user
    return 5;  // 5%
}

// 4. With Parameters and With Return
int deposit(int balance, int amount) {
    balance += amount;
    return balance;
}

int main() {
    int balance = 1000;  // Initial balance
    int amount;

    // Call Type 1
    welcomeMessage();

    // Call Type 2
    printBalance(balance);

    // Call Type 3
    int rate = getInterestRate();
    printf("Current Interest Rate = %d%%\n", rate);

    // Call Type 4
    printf("\nEnter amount to deposit: ");
    scanf("%d", &amount);
    balance = deposit(balance, amount);
    printf("After deposit, ");
    printBalance(balance);

    return 0;
}
