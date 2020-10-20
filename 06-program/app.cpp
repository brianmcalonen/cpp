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

// Function prototypes
void inputFood(int, int, string[], double[]);
void printTable();
double averageFood();
double leastFood();
double mostFood();

int main()
{
    const int NUM_ROWS = 3;
    const int NUM_COLS = 7;
    string header[] = {"Monkey", "Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};
    double monkey_array[NUM_ROWS][NUM_COLS];

    // Function calls
    inputFood(NUM_ROWS, NUM_COLS, header, monkey_array);

    return 0;
}

void inputFood(int NUM_ROWS, int NUM_COLS, string header[], double monkey_array[])
{
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            cout << "Enter pounds of food eaten by monkey " << (i + 1) << "on " << header[i + 1] << ": " << endl;
            cin >> monkey_array[i][j];
        }
    }

    cout << monkey_array << endl;
}