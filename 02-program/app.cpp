#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double SERVICE_CHARGE = 0.35;

    char menu_choice;
    double total_balance;
    double transaction_amount;
    double total_charges;
    bool program_running = true;

    // display the progam's title
    cout << "\nCheckbook Balancing Program" << endl;
    cout << "----------------------------\n" << endl;

    // prompt the user for their initial balance
    cout << "Enter the beginning balance: ";
    cin >> total_balance;

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    while(program_running) {

        // display the menu
        cout << "\nCommands Menu:" << endl;
        cout << "C - process a check" << endl;
        cout << "D - process a deposit" << endl;
        cout << "E - end the program\n" << endl;

        // prompt the user for their menu choice
        cout << "Enter transaction type: ";
        cin >> menu_choice;

        // switch statement based on user's choice 
        switch (menu_choice) 
        {
            case 'c':
            case 'C':
                // prompt the user for the transaction amount
                cout << "Enter transaction amount: ";
                cin >> transaction_amount;
                
                // validate user input
                if (transaction_amount <= 0)
                {
                    cout << "Please enter a valid number" << endl;
                    cout << "Enter transaction amount: ";
                    cin >> transaction_amount;
                }

                // Subtract transaction amount from thew balance
                total_balance -= transaction_amount;

                // Add service fee to total charges
                total_charges += SERVICE_CHARGE;

                cout << "\nProcessing check for $" << transaction_amount << endl;
                cout << "Balance: $" << total_balance << endl;
                cout << "Service charge: $0.35 for a check" << endl;
                cout << "Total service charges: $" << total_charges << "\n" << endl;
                
                break;
            
            case 'd':
            case 'D':
                // prompt the user for the transaction amount
                cout << "Enter transaction amount: ";
                cin >> transaction_amount;

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
                cout << "Total service charges: $" << total_charges << "\n" << endl;

                break;

            case 'e':
            case 'E':
                // Subtract total service charges from the total balance
                total_balance -= total_charges;
                cout << "Processing end of month:" << endl;
                cout << "Final balance: $" << total_balance << "\n" << endl;

                program_running = false;

                break;

            default:
                cout << "Please enter a valid menu choice" << endl;

        }

    }

    return 0;
}