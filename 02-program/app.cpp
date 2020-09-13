#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char choice;
    double balance;
    double transaction_amount;

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // display the progam's title
    cout << "\nCheckbook Balancing Program" << endl;
    cout << "----------------------------" << endl;

    // prompt the user for their initial balance
    cout << "Enter the beginning balance: ";
    cin >> balance;

    // display the menu
    cout << "Commands:" << endl;
    cout << "C - process a check" << endl;
    cout << "D - process a deposit" << endl;
    cout << "E - end the program" << endl;

    // Enter transaction type: C
    cout << "Enter transaction type: ";
    cin >> choice;

    // Enter transaction amount: 50.25
    cout << "Enter transaction amount: ";
    cin >> transaction_amount;

    // switch statement based on user's choice 
    switch (choice) 
    {
        case 'c':
            cout << choice;

            //Enter transaction type: C
            // Enter transaction amount: 250
            // Processing check for $250.00
            // Balance: $599.75
            // Service charge: $0.35 for a check
            // Total service charges: $.70

            break;
        
        case 'd':
        case 'D':
            cout << choice;

            // Enter transaction type: D
            // Enter transaction amount: 200
            // Processing deposit for $200.00
            // Balance: $799.75
            // Total service charges: $.70

            break;

        case 'e':
        case 'E':
            cout << choice;

            // Enter transaction type: E
            // Processing end of month
            // Final balance: $799.05
            
            break;

        default:
            cout << "Please enter a valid choice" << endl;

    }

    return 0;
}