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
using namespace std;

// function prototypes
void displayMenu();
void processCheck(double total_balance, double transaction_amount);

int main()
{
    const double SERVICE_CHARGE = 0.35;

    char menu_choice;
    double total_balance;
    double transaction_amount;
    double total_charges;

    // display the progam's title
    cout << "\nCheckbook Balancing Program" << endl;
    cout << "----------------------------\n"
         << endl;

    // prompt the user for the starting balance
    cout << "Enter the beginning balance: ";
    cin >> total_balance;

    // call the function to display menu
    displayMenu();

    // prompt the user for their initial balance
    cout << "Enter the command and transaction amount: ";
    cin >> menu_choice >> transaction_amount;

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // switch statement based on user's choice
    switch (menu_choice)
    {
    case 'c':
    case 'C':

        processCheck(total_balance, transaction_amount);
        displayMenu();
        break;

    case 'd':
    case 'D':

        // validate user input
        if (transaction_amount <= 0)
        {
            cout << "Please enter a valid number" << endl;
            cout << "Enter transaction amount: ";
            cin >> transaction_amount;
        }

        // Add transaction amount to total balance
        total_balance += transaction_amount;

        cout << "\nProcessing deposit for $" << transaction_amount << endl;
        cout << "Balance: $" << total_balance << endl;
        cout << "Total service charges: $" << total_charges << "\n"
             << endl;

        break;

    case 'e':
    case 'E':
        // Subtract total service charges from the total balance
        total_balance -= total_charges;
        cout << "Processing end of month:" << endl;
        cout << "Final balance: $" << total_balance << "\n"
             << endl;

        break;

    default:
        cout << "Please enter a valid menu choice" << endl;
    }

    return 0;
}

void displayMenu()
{
    // display the menu
    cout << "\nCommands Menu:" << endl;
    cout << "C - process a check" << endl;
    cout << "D - process a deposit" << endl;
    cout << "E - end the program\n"
         << endl;
}

void processCheck(double total_balance, double transaction_amount)
{
    double new_balance;

    // Subtract transaction amount from the balance
    new_balance = total_balance - transaction_amount;

    // Add service fee to total charges
    // total_charges += SERVICE_CHARGE;

    cout << "\nProcessing check for $" << transaction_amount << endl;
    cout << "Balance: $" << new_balance << endl;
    cout << "Service charge: $0.35 for a check" << endl;
    // cout << "Total service charges: $" << total_charges << "\n" << endl;
}