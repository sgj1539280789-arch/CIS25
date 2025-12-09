# Week 8

# Overview
This program simulates a simple bank account system. It allows a user to deposit money, make purchases, view their current balance, 
and automatically save each transaction to a text file. The goal of the program is to demonstrate class creation, basic banking operations, and file writing in C++.

# How the Program Works
1. BankAccount Object
The program uses a class called BankAccount, which stores and manages the user's account balance.
2. Deposits
The user can add money to their account.
When a deposit is made:
The account balance increases
A message is displayed confirming the deposit
The transaction is saved to a file called transactions.txt
3. Purchases
The user can buy items through the program.
For each purchase:
The program checks whether there is enough money in the account
If there is not enough money, a warning message is shown
If the purchase is successful, the cost is deducted from the balance
The purchase is recorded in the transaction file
4. Displaying the Balance
At any time, the program can print the current balance so the user can see how much money is left.
5. Saving Transactions
Every deposit or purchase writes a line of text to transactions.txt.
This file keeps a running history of everything the user has done, such as:
Deposits
Items purchased
Amounts spent

# Program Flow
When the program runs, it performs the following steps:
Creates a new bank account
Adds an initial deposit
Makes at least two purchases
Displays the final balance
Writes each action to the transaction log file
