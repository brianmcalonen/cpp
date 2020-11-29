//******************************************************************
// Assignment 7 - Postal Packages
// Programmer: Brian McAlonen
// Completed : 11/29/2020
// Status    : Complete

// Program for checking if a package meets shipping requirements and
// calculating the shipping cost based on dimensions and weight.
//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
#include <string>
using namespace std;

// Function prototypes
void userInput(int, int, int, int, int, int, int);
double calcCost(int);

// main Function definition
int main()
{
    int weight,                 // weight of the package
        side1,                  // length of a side of the package
        side2,                  // length of a side of the package
        side3,                  // length of a side of the package
        num_transactions = 0,   // number of total transactions
        num_accepted = 0,       // number of total accepted transactions
        num_rejected = 0;       // number of total rejected transactions

    // print the instructions for the user
    cout << "\nFor each transaction, enter package weight and 3 dimensions." << endl;
    cout << "Enter -1 to quit." << endl;

    // Function call
    userInput(weight, side1, side2, side3, num_accepted, num_rejected, num_transactions);

    return 0;
}

// userInput Fuction definition
void userInput(int weight, int side1, int side2, int side3, int num_accepted, int num_rejected, int num_transactions)
{
    // prompt the user for the package details
    cout << "\nEnter package weight and 3 dimensions: " << endl;
    // weight variable is set to the first user input
    cin >> weight;

    // check if user wants to end the program by entering -1
    if (weight == -1)
    {
        // print the number of accepted packages
        cout << "\nNumber of accepted packages: " << num_accepted << endl;
        // print the number of rejected packages
        cout << "Number of rejected packages: " << num_rejected << endl;

    }

    // side variables are set to the final three input values
    cin >> side1 >> side2 >> side3;

    // check if user input for sides is valid, positive ints
    if (weight <= 0 || side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        // print error message
        cout << "\nError - package weight and dimensions must be larger than 0" << endl;
        cout << "Please re-enter transaction" << endl;

        // call the userInput function again
        userInput(weight, side1, side2, side3, num_accepted, num_rejected, num_transactions);
    }

    // initialize an array with the three sides of the package
    int side_array[3] = {side1, side2, side3};
    int girth = 0;      // set girth to 0
    int index = 0;      // set index to 0
    int largest = 0;    // set largest to 0

    // loop through of the side array
    while (index < 3)
    {
        // if the current side is greater than the largest side
        if(side_array[index] > largest)
        {
            // set the largest side equal top the current side
            largest = side_array[index];
        }
        // increment the index
        index++;
    }

    // calcaluate girth;
    girth = 2 * (side1 + side2 + side3 - largest);

    // check if user input meets the shipping requirements
    if (weight > 50 || side1 > 36 || side2 > 36 || side3 > 36 || girth > 60)
    {
        num_transactions++;     // increment the number of transactions
        num_rejected++;         // increment the number of rejected transactions

        // print the transaction number
        cout << setw(12) << left << "\nTransaction:" << setw(10) << right << num_transactions << endl;
        // print the transaction status - rejected
        cout << setw(12) << left << "Status:" << setw(10) << right << "Rejected" << endl;
        // print the package's weight
        cout << setw(12) << left << "Weight:" << setw(10) << right << weight << endl;
        // print the transaction's calculated cost = 0
        cout << setw(12) << left << "Cost:" << setw(10) << right << "---" << endl;

        // call the userInput function again
        userInput(weight, side1, side2, side3, num_accepted, num_rejected, num_transactions);
    }
    else        // the package was accepted
    {
        num_transactions++;     // increment the number of transactions
        num_accepted++;         // increment the number of accepted transactions

        // print the transaction number
        cout << setw(12) << left << "\nTransaction:" << setw(10) << right << num_transactions << endl;
        // print the transaction status - accepted
        cout << setw(12) << left << "Status:" << setw(10) << right << "Accepted" << endl;
        // print the package's weight
        cout << setw(12) << left << "Weight:" << setw(10) << right << weight << endl;
        // print the transaction's calculated cost
        cout << setw(12) << left << "Cost:" << setw(10) << right << calcCost(weight) << endl;

        // call the userInput function again
        userInput(weight, side1, side2, side3, num_accepted, num_rejected, num_transactions);
    }

}

// function that accepts and int for weight and returns the calculated cost for shipping
double calcCost(int weight)
{
    // initializea array of shipping weight cutoffs
    int weight_array[] = {1, 2, 3, 5, 7, 10, 13, 16, 20, 25, 30, 35, 40, 45, 50};
    // initialize a parallel array of shipping costs based on the weight_array
    double shipping_charge[] = {1.50, 2.10, 4.00, 6.75, 9.90, 14.95, 19.40, 24.20, 27.30, 31.90, 38.50, 43.50, 44.80, 47.40, 55.20};

    int index = 0;          // set index to 0
    int position = -1;      // set position to -1 in case weight is not found
    bool found = false;     // set found to false

    // while not at the end of the array and the value not yet found
    while(index < 15 && !found)
    {
        // check is the weight is less than the current weight in the array
        if(weight <= weight_array[index])
        {
            // set to true to end the loop
            found = true;
            // set position to the current index to use the parallel array
            position = index;
        }
        // increment the index
        index++;
    }
    // return the correct cost by using the index from the parallel array
    return shipping_charge[position];
}
