Start with your checkbook balancing program from assignment 2 that helps you balance a checkbook at the end of a monthly statement period. Modify your program as follows:

The user should enter the transaction type and amount (if required) on a single line. If there is a problem with the command (invalid transaction type or invalid amount), print an error message and have the user re-enter the whole command. You should never have a separate prompt for just the transaction type or for just the transaction amount. Note that this means that you do not need validation loops. The validation is done using selection (if or switch) inside the main transaction processing loop. You just need the one transaction processing loop that reads a command on each iteration.

You must divide your program into at least three different functions: a main function, a check-processing function and a deposit-processing function. You can add other functions if you want to.
Add additional service charges as described below.

Allow the program to start with an initial balance that is positive, zero or negative. There are no restrictions on the starting balance. This means is that the user could start a month with a negative balance.
These changes may require substantial reorganization of your program.

Program Input

The program commands (user input) are as follows (see the sample program dialog near the bottom of this page).

Transaction command

Meaning

C amount

Process a check for amount dollars, where amount is a floating-point number.

D amount

Process a deposit for amount dollars, where amount is a floating-point number.

E

Perform end-of-month processing and end the program.

 

Service Charges

There is a $0.35 service charge for each check written.
If the account balance falls below $1000.00 at any time during the month, there is a $10.00 service charge (low balance charge) for the month. If the balance stays at $1000 or more during the entire monthly statement period (program execution), there is no low balance charge for the month. Otherwise, there is a single $10.00 low balance charge for the month.
If processing a check results in a negative balance, there is a $30.00 service charge (insufficient funds charge). This $30.00 fee is charged for each check that results in a negative balance.
Note: Do not any deduct service charges from the account balance until the end of the month.
Program Output

For each transaction, print:

the transaction type and the amount (if any)
the resulting account balance
the type and amount of any new service charges resulting from the transaction
the total service charges accrued so far
At the end of the month, deduct the service charges and print the final balance. Your program dialog should look something like this example (user input is shown in bold).

Enter the beginning balance: 1200

Enter a transaction: C 50.25
Processing check for $50.25
Balance: $1149.75
Service charge: $0.35 for a check
Total service charges: $.35

Enter a transaction: C 250
Processing check for $250.00
Balance: $899.75
Service charge: $0.35 for a check
Service charge: $10.00 balance below $1000.00
Total service charges: $10.70

Enter a transaction: D 200
Processing deposit for $200.00
Balance: $1099.75
Total service charges: $10.70

Enter a transaction: E
Processing end of month
Final balance: $1089.05

