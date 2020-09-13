COSC 1337 - Programming Fundamentals II
Bob Comer, Professor of Computer Studies

Assignment 2 - Account Balancing

Read through chapter 5 before starting this assignment.

Write a C++ program to help you balance your checkbook at the end of the month. The program should have the user enter the initial balance followed by a series of transactions. For each transaction, first have the user enter a transaction type. The valid transaction types are:

C - process a check (subtract the check amount from the current balance)
D - process a deposit (add the deposit amount to the current balance)
E - do end of month processing and exit the program.
For checks and deposits, the user should be prompted to enter the transaction amount.

Service Charges

There is a $0.35 service charge for each check written. Keep a running total of the service charges.
Service charges are not deducted from the account balance until the end of the month.
Output

After each transaction, print

the transaction type and amount (if applicable)
the resulting account balance
the total service charges accrued so far
At the end of the month, deduct the service charges and print the final balance. Your program output should look something like this example (user input is shown in bold).

Checkbook Balancing Program

Enter the beginning balance: 900

Commands:
C - process a check
D - process a deposit
E - end the program

Enter transaction type: C
Enter transaction amount: 50.25
Processing check for $50.25
Balance: $849.75
Service charge: $.35 for a check
Total service charges: $.35

Enter transaction type: C
Enter transaction amount: 250
Processing check for $250.00
Balance: $599.75
Service charge: $0.35 for a check
Total service charges: $.70

Enter transaction type: D
Enter transaction amount: 200
Processing deposit for $200.00
Balance: $799.75
Total service charges: $.70

Enter transaction type: E
Processing end of month
Final balance: $799.05

 

Input validation

If the transaction type is invalid, print an informative error message and have the user re-enter the transaction type.
The transaction amount should be a positive number (larger than zero). If it is not, print an informative error message and have the user re-enter the transaction amount.
Other requirements

Do not use global variables in any assignment. A global variable is a variable that is declared outside any function. Note: global constants are okay.
All dollar amounts should be printed with 2 decimal places.
