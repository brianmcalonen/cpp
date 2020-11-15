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
void userInput(int, int, int, int, int, int);
int calcGirth(int, int, int, int);

// main Function definition
int main()
{
    int weight,
        side1,
        side2,
        side3,
        num_accepted = 0,
        num_rejected = 0;

    cout << endl;
    cout << "For each transaction, enter package weight and 3 dimensions." << endl;
    cout << "Enter -1 to quit." << endl;

    // Function calls
    userInput(weight, side1, side2, side3, num_accepted, num_rejected);

    return 0;
}

// userInput Fuction definition
void userInput(int weight, int side1, int side2, int side3, int num_accepted, int num_rejected)
{
    int girth = 0;

    cout << endl;
    cout << "Enter package weight and 3 dimensions: " << endl;
    cin >> weight;

    // check if user wants to end the program
    if (weight == -1)
    {
        cout << endl;
        cout << "Number of accepted packages: " << num_accepted << endl;
        cout << "Number of rejected packages: " << num_rejected << endl;

    }

    cin >> side1 >> side2 >> side3;

    // check if user input is valid, positive ints
    if (weight <= 0 || side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        cout << endl;
        cout << "Error - package weight and dimensions must be larger than 0" << endl;
        cout << "Please re-enter transaction" << endl;

        userInput(weight, side1, side2, side3, num_accepted, num_rejected);
    }

    // calculate girth
    int side_array[3] = {side1, side2, side3};
    int index = 0;
    int largest = 0;

    while (index < 3)
    {
        if(side_array[index] > largest)
        {
            largest = side_array[index];
        }
        index++;
    }

    girth = 2 * (side1 + side2 + side3 - largest);

    cout << largest << endl;
    cout << girth << endl;


}
