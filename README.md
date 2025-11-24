# Bank-account-management-system
📑 Table of Contents

📌 Features

🛠️ Technologies Used

📂 Project Structure

🚀 Getting Started

1️⃣ Compilation

2️⃣ Running the Program

📘 How It Works

🧩 Code Overview

📷 Screenshots (Sample Output)

🚀 Future Enhancements

📄 License

🤝 Contributing

📌 Features

✔ Create a new bank account
✔ Deposit money
✔ Withdraw money (with safety checks)
✔ Check account balance
✔ Display full account details
✔ Simple and user-friendly menu-based interface

🛠️ Technologies Used

C Language

GCC / Clang Compiler

Standard Libraries (stdio.h, string.h)

📂 Project Structure
├── bank.c         # Main source code
├── README.md      # Documentation

🚀 Getting Started
1️⃣ Compilation
Using GCC (Linux / Mac):
gcc bank.c -o bank

Using MinGW (Windows):
gcc bank.c -o bank.exe

2️⃣ Running the Program

Linux / Mac:

./bank


Windows:

bank.exe

📘 How It Works

Once the program starts, it displays a menu:

===== BANK ACCOUNT MANAGEMENT SYSTEM =====
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Check Balance
5. Display Account Details
6. Exit


The user must first create an account, after which deposit, withdrawal, and balance-checking options become enabled.

🧩 Code Overview
Structure to store account details
struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

Key Functions

createAccount() - Creates a new account with user input

deposit() - Adds amount to account

withdraw() - Deducts amount with validation

checkBalance() - Shows the current balance

displayDetails() - Displays account info

📷 Screenshots (Sample Output)
===== BANK ACCOUNT MANAGEMENT SYSTEM =====
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Check Balance
5. Display Account Details
6. Exit
Enter your choice: 1

Enter Account Number: 1024
Enter Account Holder Name: Rahul
Account created successfully!

Enter amount to deposit: 500
Successfully deposited ₹500.00

Enter amount to withdraw: 200
Successfully withdrawn ₹200.00

===== ACCOUNT DETAILS =====
Account Number : 1024
Account Holder : Rahul
Current Balance: ₹300.00

🚀 Future Enhancements

If you plan to expand this project, here are some upgrade ideas:

🔹 Add multiple account support
🔹 Save accounts in a file (file handling)
🔹 Add PIN/password login
🔹 Add interest calculation
🔹 GUI version (GTK / Qt)
🔹 Error handling for invalid inputs
📄 License

This project is licensed under the MIT License — free to use and modify.

🤝 Contributing

Contributions, issues, and feature requests are welcome!
Feel free to submit a Pull Request or open an Issue.
