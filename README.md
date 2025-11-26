# Bank-account-management-system

## Table of Contents

## ** Features**

## ** Technologies Used**

## ** Project Structure**

## ** Getting Started**

## **1️ Compilation**

## **2️ Running the Program**

 How It Works

 Code Overview

 Screenshots (Sample Output)

 Future Enhancements

 License

 Contributing

## ** Abstract**

 This C program is a simple bank account management system that lets a user create an account, deposit and withdraw money, check the balance, and view account   details. It uses a structure to store account information and a menu-driven interface for user interaction.
 
## ** Features**

=> Create a new bank account
=> Deposit money
=> Withdraw money (with safety checks)
=> Check account balance
=> Display full account details
=> Simple and user-friendly menu-based interface

## ** Technologies Used**

C Language

GCC / Clang Compiler

Standard Libraries (stdio.h, string.h)

 Project Structure
├── bank.c         # Main source code
├── README.md      # Documentation

## ** Getting Started**
### **1️ Compilation**
Using GCC (Linux / Mac):
gcc bank.c -o bank

Using MinGW (Windows):
gcc bank.c -o bank.exe

### **2️ Running the Program**

Linux / Mac:

./bank


Windows:

bank.exe

 How It Works

Once the program starts, it displays a menu:
<img width="495" height="416" alt="image" src="https://github.com/user-attachments/assets/b15d5cc1-a97d-4db3-872c-f96c880232a3" />

The user must first create an account, after which deposit, withdrawal, and balance-checking options become enabled.

### ** Code Overview**
Structure to store account details
struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

## **Key Functions**

createAccount() - Creates a new account with user input

deposit() - Adds amount to account

withdraw() - Deducts amount with validation

checkBalance() - Shows the current balance

displayDetails() - Displays account info

## ** Screenshots (Sample Output)**
<img width="456" height="278" alt="image" src="https://github.com/user-attachments/assets/30d4b5a4-b2be-4f22-aec3-44da3ef4cfac" />
<img width="422" height="261" alt="image" src="https://github.com/user-attachments/assets/e7829673-7a48-4c68-a705-c59372c6a5ca" />
<img width="462" height="265" alt="image" src="https://github.com/user-attachments/assets/1edcdf91-dd89-40fc-9c0f-db33c980bae3" />
<img width="472" height="241" alt="Screenshot 2025-11-24 113633" src="https://github.com/user-attachments/assets/868a35fd-b21e-4ebb-bd6e-508b1799b969" />
<img width="476" height="304" alt="Screenshot 2025-11-24 113730" src="https://github.com/user-attachments/assets/c9e45322-4b27-45b3-8106-b3bde8ef52e0" />
<img width="474" height="234" alt="Screenshot 2025-11-24 113815" src="https://github.com/user-attachments/assets/7d850a15-3de5-4472-b58d-9139eef23314" />


## ** Future Enhancements**

If you plan to expand this project, here are some upgrade ideas:

🔹 Add multiple account support
🔹 Save accounts in a file (file handling)
🔹 Add PIN/password login
🔹 Add interest calculation
🔹 GUI version (GTK / Qt)
🔹 Error handling for invalid inputs

