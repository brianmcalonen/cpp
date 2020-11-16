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
void userInput(int, int, int, int, int, int, int);
int calcCost(int);

// main Function definition
int main()
{
    int weight,
        side1,
        side2,
        side3,
        num_accepted = 0,
        num_rejected = 0,
        num_transactions = 0;

    cout << endl;
    cout << "For each transaction, enter package weight and 3 dimensions." << endl;
    cout << "Enter -1 to quit." << endl;

    // Function calls
    userInput(weight, side1, side2, side3, num_accepted, num_rejected, num_transactions);

    return 0;
}

// userInput Fuction definition
void userInput(int weight, int side1, int side2, int side3, int num_accepted, int num_rejected, int num_transactions)
{

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

        userInput(weight, side1, side2, side3, num_accepted, num_rejected, num_transactions);
    }

    // calculate girth
    int side_array[3] = {side1, side2, side3};
    int girth = 0;
    int index = 0;
    int largest = 0;

    // search which side is the longest
    while (index < 3)
    {
        if(side_array[index] > largest)
        {
            largest = side_array[index];
        }
        index++;
    }

    girth = 2 * (side1 + side2 + side3 - largest);

    // check if user input is valid, positive ints
    if (weight > 50 || side1 > 36 || side2 > 36 || side3 > 36 || girth > 60)
    {
        num_transactions++;
        num_rejected++;

        cout << endl;
        cout << setw(12) << left << "Transaction:" << setw(10) << right << num_transactions << endl;
        cout << setw(12) << left << "Status:" << setw(10) << right << "Rejected" << endl;
        cout << setw(12) << left << "Weight:" << setw(10) << right << weight << endl;
        cout << setw(12) << left << "Cost:" << setw(10) << right << "---" << endl;

        userInput(weight, side1, side2, side3, num_accepted, num_rejected, num_transactions);
    }
    else
    {
        num_transactions++;
        num_accepted++;

        cout << endl;
        cout << setw(12) << left << "Transaction:" << setw(10) << right << num_transactions << endl;
        cout << setw(12) << left << "Status:" << setw(10) << right << "Accepted" << endl;
        cout << setw(12) << left << "Weight:" << setw(10) << right << weight << endl;
        cout << setw(12) << left << "Cost:" << setw(10) << right << calcCost(girth) << endl;

        userInput(weight, side1, side2, side3, num_accepted, num_rejected, num_transactions);
    }

}

int calcCost(int girth)
{
    int weight_array[15] = {1, 2, 3, 5, 7, 10, 13, 16, 20, 25, 30, 35, 40, 45, 50};
    double shipping_charge[15] = {1.50, 2.10, 4.00, 6.75, 9.90, 14.95, 19.40, 24.20, 27.30, 31.90, 38.50, 43.50, 44.80, 47.40, 55.20};


    return girth;
}
