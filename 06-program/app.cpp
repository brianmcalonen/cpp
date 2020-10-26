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
void printTable(string headerArr[], double foodArr[]);

// inputFood function definition
void inputFood(string headerArr[], double foodArr[NUM_ROWS][NUM_COLS])
{
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            cout << "Enter pounds of food eaten by monkey " << (i + 1) << " on " << headerArr[j + 1] << ": " << endl;
            cin >> foodArr[i][j];
        }
    }
}

void printTable(string headerArr[], double foodArr[NUM_ROWS][NUM_COLS])
{

    // print header and format
    cout << setw(7) << headerArr[0] << setw(7) << headerArr[1] << setw(7) << headerArr[2] << setw(7)
    << headerArr[3] << setw(7) << headerArr[4] << setw(7) << headerArr[5] << setw(7) << headerArr[6]
    << setw(7) << headerArr[7] << endl;

    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            cout << setw(7) << foodArr[i][j] << setw(7) << foodArr[i][j] << setw(7) << foodArr[i][j] << setw(7)
    << foodArr[i][j] << setw(7) << foodArr[i][j] << setw(7) << foodArr[i][j] << setw(7) << foodArr[i][j]
    << setw(7) << foodArr[i][j] << endl;

        }
    }

    cout << "print table" << endl;
}

int main()
{
    string header[] = {"Monkey", "Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};
    double monkey_array[NUM_ROWS][NUM_COLS];

    // set precision of output
    cout << fixed << setprecision(2);

    // Function calls
    // inputFood(header, monkey_array);
    printTable(header, monkey_array);

    return 0;
}
