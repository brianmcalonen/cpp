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


int main()
{
    int weight,
        side1,
        side2,
        side3;

    // Function calls
    userInput(weight, side1, side2, side3);


    return 0;
}

// userInput Fuction definition
void userInput(int weight, int side1, int side2, int side3)
{

    cout << "enter your input: " << endl;
    cin >> weight >> side1 >> side2 >> side3;

    cout << weight << endl;
    cout << side1 << endl;
    cout << side2 << endl;
    cout << side3 << endl;

}
