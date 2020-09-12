#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char choice;
    double balance;

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // display the menu
    cout << "----------------------------" << endl;
    cout << "Checkbook Balancing Program" << endl;
    cout << "----------------------------" << endl;

    // prompt the user for their initial balance
    cout << "\nEnter the beginning balance: ";
    cin >> balance;

    cout << "\nInitial balance: " << balance << endl;

    return 0;
}