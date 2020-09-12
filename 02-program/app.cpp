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
    cout << "----------------------------" << endl;
    cout << "Checkbook Balancing Program" << endl;
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

    cout << choice << " " << transaction_amount << endl;

    return 0;
}