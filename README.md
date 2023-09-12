# Display-Bank-account-details
Bank Account Management System
This is a simple C++ program that simulates a basic bank account management system. It allows you to create a bank account, input customer information, and display the account details.

Features
Create a bank account with the following details:

Customer name (without spaces)
Account number
Type of account (Savings/Current Account)
Initial balance
Display account details, including customer name, account number, account type, and current balance.

How to Use
Clone this repository to your local machine or download the main.cpp file.

Compile the code using a C++ compiler. For example, you can use the g++ compiler as follows:

bash
Copy code
g++ main.cpp -o bank_account
Run the program:

bash
Copy code
./bank_account
Follow the on-screen prompts to:

Enter the customer name (without spaces).
Enter the account number.
Choose the type of account (Savings/Current Account).
Enter the initial balance.
The program will display the entered account details.

You can further modify the program to include additional features like deposits and withdrawals.

Note
This program is a simple demonstration of basic object-oriented programming principles in C++. It can be expanded and enhanced to include more advanced banking operations.

The program uses the fflush(stdin) function to clear the input buffer. Note that this method is not entirely portable, and there may be better ways to handle input validation and buffer clearing in C++.
