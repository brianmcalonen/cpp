//******************************************************************
// Assignment 6 - Monkey Food
// Programmer: Brian McAlonen
// Completed : 10/18/2020
// Status    : Complete

//
//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
#include <string>
using namespace std;

// Global constants
const int NUM_ROWS = 3;
const int NUM_COLS = 7;

// Function prototypes
void inputFood(string headerArr[], double foodArr[]);

void inputFood(string headerArr[], double foodArr[NUM_ROWS][NUM_COLS])
{
    double food;

    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            cout << "Enter pounds of food eaten by monkey " << (i + 1) << " on " << headerArr[j + 1] << ": " << endl;
            cin >> food;
        }
    }

    cout << "works" << endl;
}

int main()
{
    string header[] = {"Monkey", "Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};
    double monkey_array[NUM_ROWS][NUM_COLS];

    // Function calls
    inputFood(header, monkey_array);

    return 0;
}
