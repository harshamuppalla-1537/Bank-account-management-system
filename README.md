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
<img width="495" height="416" alt="image" src="https://github.com/user-attachments/assets/b15d5cc1-a97d-4db3-872c-f96c880232a3" />

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
<img width="456" height="278" alt="image" src="https://github.com/user-attachments/assets/30d4b5a4-b2be-4f22-aec3-44da3ef4cfac" />
<img width="422" height="261" alt="image" src="https://github.com/user-attachments/assets/e7829673-7a48-4c68-a705-c59372c6a5ca" />
<img width="462" height="265" alt="image" src="https://github.com/user-attachments/assets/1edcdf91-dd89-40fc-9c0f-db33c980bae3" />


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
