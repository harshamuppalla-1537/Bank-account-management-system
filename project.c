#include <stdio.h>
#include <string.h>

// Structure to store account details
struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

// Function declarations
void createAccount(struct Account *acc);
void deposit(struct Account *acc);
void withdraw(struct Account *acc);
void checkBalance(struct Account *acc);
void displayDetails(struct Account *acc);

int main() {
    struct Account acc;
    int choice;
    int created = 0;

    while (1) {
        printf("\n===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display Account Details\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(&acc);
                created = 1;
                break;
            case 2:
                if (created)
                    deposit(&acc);
                else
                    printf("Please create an account first.\n");
                break;
            case 3:
                if (created)
                    withdraw(&acc);
                else
                    printf("Please create an account first.\n");
                break;
            case 4:
                if (created)
                    checkBalance(&acc);
                else
                    printf("Please create an account first.\n");
                break;
            case 5:
                if (created)
                    displayDetails(&acc);
                else
                    printf("Please create an account first.\n");
                break;
            case 6:
                printf("Thank you for using our bank system!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Function definitions
void createAccount(struct Account *acc) {
    printf("\nEnter Account Number: ");
    scanf("%d", &acc->accountNumber);
    printf("Enter Account Holder Name: ");
    scanf("%s", acc->name);
    acc->balance = 0;
    printf("Account created successfully!\n");
}

void deposit(struct Account *acc) {
    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0) {
        acc->balance += amount;
        printf("Successfully deposited ₹%.2f\n", amount);
    } else {
        printf("Invalid amount.\n");
    }
}

void withdraw(struct Account *acc) {
    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= acc->balance) {
        acc->balance -= amount;
        printf("Successfully withdrawn ₹%.2f\n", amount);
    } else {
        printf("Insufficient balance or invalid amount.\n");
    }
}

void checkBalance(struct Account *acc) {
    printf("\nCurrent Balance: ₹%.2f\n", acc->balance);
}

void displayDetails(struct Account *acc) {
    printf("\n===== ACCOUNT DETAILS =====\n");
    printf("Account Number : %d\n", acc->accountNumber);
    printf("Account Holder : %s\n", acc->name);
    printf("Current Balance: ₹%.2f\n", acc->balance);
}