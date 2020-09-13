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
    bool program_running = true;
    

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // display the progam's title
    cout << "\nCheckbook Balancing Program" << endl;
    cout << "----------------------------\n" << endl;

    // prompt the user for their initial balance
    cout << "Enter the beginning balance: ";
    cin >> balance;

    while(program_running) {

        // display the menu
        cout << "\nCommands Menu:" << endl;
        cout << "C - process a check" << endl;
        cout << "D - process a deposit" << endl;
        cout << "E - end the program\n" << endl;

        // prompt the user for their transaction menu_choice
        cout << "Enter transaction type: ";
        cin >> menu_choice;

        // switch statement based on user's menu_choice 
        switch (menu_choice) 
        {
            case 'c':
            case 'C':
                // prompt the user for the transaction amount
                cout << "Enter transaction amount: ";
                cin >> transaction_amount;

                // Subtract transaction amount from balance
                balance -= transaction_amount;

                // Add service fee to total charges
                total_charges += SERVICE_CHARGE;

                cout << "\nProcessing check for $" << transaction_amount << endl;
                cout << "Balance: $" << balance << endl;
                cout << "Service charge: $0.35 for a check." << endl;
                cout << "Total service charges: $" << total_charges << "\n" << endl;
                
                break;
            
            case 'd':
            case 'D':
                // prompt the user for the transaction amount
                cout << "Enter transaction amount: ";
                cin >> transaction_amount;

                // Add transaction amount to balance
                balance += transaction_amount;

                cout << "\nProcessing deposit for $" << transaction_amount << endl;
                cout << "Balance: $" << balance << endl;
                cout << "Total service charges: $" << total_charges << "\n" << endl;

                break;

            case 'e':
            case 'E':
                // Subtract total service charges from the balance
                balance -= total_charges;
                cout << "Processing end of month..." << endl;
                cout << "Final balance: $" << balance << "\n" << endl;

                program_running = false;

                break;

            default:
                cout << "Please enter a valid menu choice" << endl;

        }

    }

    return 0;
}