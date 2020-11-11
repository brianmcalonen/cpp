//******************************************************************
// Assignment 7 - Postal Packages
// Programmer: Brian McAlonen
// Completed : 11/09/2020
// Status    : Complete

//
//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
#include <string>
using namespace std;

// Function prototypes
void userInput(int, int, int, int);

// main Function definition
int main()
{
    int weight,
        side1,
        side2,
        side3;

    cout << endl;
    cout << "For each transaction, enter package weight and 3 dimensions." << endl;
    cout << "Enter -1 to quit." << endl;

    // Function calls
    userInput(weight, side1, side2, side3);

    return 0;
}

// userInput Fuction definition
void userInput(int weight, int side1, int side2, int side3)
{
    cout << endl;
    cout << "Enter package weight and 3 dimensions: " << endl;
    cin >> weight >> side1 >> side2 >> side3;

    if (weight <= 0 || side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        cout << endl;
        cout << "Error - package weight and dimensions must be larger than 0" << endl;
        cout << "Please re-enter transaction" << endl;

        userInput(weight, side1, side2, side3);
    }

}
