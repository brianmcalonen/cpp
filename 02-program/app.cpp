#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double SERVICE_CHARGE = 0.35;

    char menu_choice;
    double balance;
    double transaction_amount;
    double total_charges;
    

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // display the progam's title
    cout << "\nCheckbook Balancing Program" << endl;
    cout << "----------------------------\n" << endl;

    // prompt the user for their initial balance
    cout << "Enter the beginning balance: ";
    cin >> balance;

    // display the menu
    cout << "\nCommands:" << endl;
    cout << "C - process a check" << endl;
    cout << "D - process a deposit" << endl;
    cout << "E - end the program\n" << endl;

    // prompt the user for their transaction menu_choice
    cout << "Enter transaction type: ";
    cin >> menu_choice;

    // prompt the user for the transaction amount
    cout << "Enter transaction amount: ";
    cin >> transaction_amount;

    // switch statement based on user's menu_choice 
    switch (menu_choice) 
    {
        case 'c':
        case 'C':
            // Subtract transaction amount from balance
            balance -= transaction_amount;

            // Add service fee to total charges
            total_charges += SERVICE_CHARGE;

            cout << "\nProcessing check for " << transaction_amount << endl;
            cout << "Balance: $" << balance << endl;
            cout << "Service charge: $0.35 for a check." << endl;
            cout << "Total service charges: $" << total_charges << " for a check.\n" << endl;
            break;
        
        case 'd':
        case 'D':
            cout << menu_choice;

            // Enter transaction type: D
            // Enter transaction amount: 200
            // Processing deposit for $200.00
            // Balance: $799.75
            // Total service charges: $.70

            break;

        case 'e':
        case 'E':
            cout << menu_choice;

            // Enter transaction type: E
            // Processing end of month
            // Final balance: $799.05

            break;

        default:
            cout << "Please enter a valid menu_choice" << endl;

    }

    return 0;
}