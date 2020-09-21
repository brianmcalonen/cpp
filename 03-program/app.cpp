//******************************************************************
// Account Balancing - Revisited
// Programmer: Brian McAlonen
// Completed : 9/20/2020
// Status    : Complete
//
// Menu driven program that allows users to keep track of their
// checkbook. Processes checks, deposits and calculates fees.
//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
#include <ctype.h>
#include <stdio.h>
using namespace std;

// global constants
const double SERVICE_CHARGE = 0.35;
const double NEGATIVE_FEE = 30.0;

// function prototypes
void displayMenu();
void processCheck(double &, double &, double &, bool &, double &, char &);
void processDeposit(double &, double &, double &, char &);
void exitProgram(double &, double &, bool &);

// main function
int main()
{
    char menu_choice;            // user's transaction choice
    double total_balance;        // account balance
    double transaction_amount;   // amount of check or deposit
    double total_charges;        // total service charges
    bool low_balance = false;    // has account value dropped below $1000
    double negative_times;       // number of times balance has gone negative
    bool program_running = true; // used to exit and process monthly balance

    // display the progam's title
    cout << "\nCheckbook Balancing Program" << endl;
    cout << "----------------------------\n"
         << endl;

    // prompt the user for the starting balance
    cout << "Enter the beginning balance: ";
    cin >> total_balance;

    // if the balance drops below 1000 then add low balance fee
    if (total_balance < 1000)
    {
        // toggle boolean to true because balance went below $1000
        low_balance = true;
    }

    // if the balance drops below 0 then increment negative balance times
    if (total_balance < 0)
    {
        // increment counter for number of times account went negative
        negative_times++;
    }

    // check if account went below $1000
    if (low_balance)
    {
        // add one time $10 fee
        total_charges += 10;

        // if account went negative
        if (negative_times > 0)
        {
            // add $30 fee for each time the account went negative
            total_charges += negative_times * NEGATIVE_FEE;
        }
    }

    // call the function to display menu
    displayMenu();

    // prompt the user for their transaction
    cout << "Enter a transaction: ";
    cin >> menu_choice >> transaction_amount;    

    // validate user's menu choice input
    if (tolower(menu_choice) != 'c' && tolower(menu_choice) != 'd' && tolower(menu_choice) != 'e')
    {
        // display an error message
        cout << "Error: You must enter a valid transaction type." << endl;
        // prompt the user for their transaction
        cout << "Enter a transaction: ";
        cin >> menu_choice >> transaction_amount;
    }

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // checks that the program hasn't stopped running
    while (program_running)
    {
        // switch statement based on user's choice
        switch (menu_choice)
        {
        case 'c':
        case 'C':
            // call the function to process the check
            processCheck(total_balance, transaction_amount, total_charges, low_balance, negative_times, menu_choice);
            break;
        case 'd':
        case 'D':
            // call function to process a deposit
            processDeposit(total_balance, transaction_amount, total_charges, menu_choice);
            break;

        case 'e':
        case 'E':
            // call function to exit the program
            exitProgram(total_balance, total_charges, program_running);
            break;

        default:
            // prompt the user to enter a valid choice
            cout << "Please enter a valid menu choice" << endl;
        }
    }

    return 0;
}

// Function: displayMenu
// Purpose: to display the Commands Menu to the user
void displayMenu()
{
    // display the commands menu
    cout << "\nCommands Menu:" << endl;
    cout << "C - process a check" << endl;
    cout << "D - process a deposit" << endl;
    cout << "E - end the program\n"
         << endl;
}

// Function: processCheck
// Purpose: calculates new total_balance and total_charges
// checks for service charges and prints info for user
void processCheck(
    double &total_balance,
    double &transaction_amount,
    double &total_charges,
    bool &low_balance,
    double &negative_times,
    char &menu_choice)
{
    // Subtract transaction amount from the balance
    total_balance -= transaction_amount;

    // Add the service charge to the total service charges
    total_charges += SERVICE_CHARGE;

    // if the balance drops below 1000 then add low balance fee
    if (total_balance < 1000)
    {
        // toggle boolean to true because balance went below $1000
        low_balance = true;
    }

    // if the balance drops below 0 then add negative balance fee
    if (total_balance < 0)
    {
        // increment counter for number of times account went negative
        negative_times++;
    }

    // check if account went below $1000
    if (low_balance)
    {
        // add one time $10 fee
        total_charges += 10;

        // if account went negative
        if (negative_times > 0)
        {
            // add $30 fee for each time the account went negative
            total_charges += negative_times * NEGATIVE_FEE;
        }
    }

    // display check amount, account balance, and service charges
    cout << "\nProcessing check for $" << transaction_amount << endl;
    cout << "Balance: $" << total_balance << endl;
    cout << "Service charge: $0.35 for a check" << endl;

    // if user's balance is low, display that a service charge has been added
    if (total_balance < 1000)
    {
        cout << "Service charge: $10.00 balance below $1000.00" << endl;
    }

    // print total amount of charges
    cout << "Total service charges: $" << total_charges << endl;

    // call function to display menu
    displayMenu();

    // prompt the user for their transaction
    cout << "Enter a transaction: ";
    cin >> menu_choice >> transaction_amount;

    // validate user's menu choice input
    if (tolower(menu_choice) != 'c' && tolower(menu_choice) != 'd' && tolower(menu_choice) != 'e')
    {
        // display an error message
        cout << "Error: You must enter a valid transaction type." << endl;
        // prompt the user for their transaction
        cout << "Enter a transaction: ";
        cin >> menu_choice >> transaction_amount;
    }
}

// Function: processDeposit
// Purpose: adds deposit to the user's balance and prints
void processDeposit(
    double &total_balance,
    double &transaction_amount,
    double &total_charges,
    char &menu_choice)
{
    // validate user input
    if (transaction_amount <= 0)
    {
        cout << "Please enter a valid number" << endl;
        cout << "Enter transaction amount: ";
        cin >> transaction_amount;
    }

    // add transaction amount to total balance
    total_balance += transaction_amount;

    // display deposit amount, account balance, and service charges
    cout << "\nProcessing deposit for $" << transaction_amount << endl;
    cout << "Balance: $" << total_balance << endl;
    cout << "Total service charges: $" << total_charges << endl;

    // call function to display menu
    displayMenu();

    // prompt the user for their transaction
    cout << "Enter a transaction: ";
    cin >> menu_choice >> transaction_amount;

    // validate user's menu choice input
    if (tolower(menu_choice) != 'c' && tolower(menu_choice) != 'd' && tolower(menu_choice) != 'e')
    {
        // display an error message
        cout << "Error: You must enter a valid transaction type." << endl;
        // prompt the user for their transaction
        cout << "Enter a transaction: ";
        cin >> menu_choice >> transaction_amount;
    }
}

// Function: exitProgram
// Purpose: calculates and displays the ending monthly balance by subtracting
// service fees from the account balance, then exits the program.
void exitProgram(
    double &total_balance,
    double &total_charges,
    bool &program_running)
{
    // subtract total service charges from the total balance
    total_balance -= total_charges;

    // display final monthly balance
    cout << "Processing end of month." << endl;
    cout << "Final balance: $" << total_balance << endl;

    // toggle variable to stop the program from running
    program_running = false;
}