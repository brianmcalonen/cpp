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
void inputFood(const double foodArr[], int num_rows);
void printTable(const double foodArr[], int num_rows);
double averageFood(const double foodArr[], int num_rows);
double greatestFood(const double foodArr[], int num_rows);
double leastFood(const double foodArr[], int num_rows);


// inputFood function definition
void inputFood(double foodArr[][NUM_COLS], int num_rows)
{
    string daysArr[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            cout << "Enter pounds of food eaten by monkey " << (i + 1) << " on " << daysArr[j] << ": " << endl;
            cin >> foodArr[i][j];
        }
    }
}

// printTable function definition
void printTable(double foodArr[][NUM_COLS], int num_rows)
{

    string headerArr[] = {"Monkey", "Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};

    // print header and format
    cout << setw(7) << headerArr[0] << setw(7) << headerArr[1] << setw(7) << headerArr[2] << setw(7)
    << headerArr[3] << setw(7) << headerArr[4] << setw(7) << headerArr[5] << setw(7) << headerArr[6]
    << setw(7) << headerArr[7] << endl;

    for (int i = 0; i < num_rows; i++)
    {
        cout << setw(7) << (i + 1) << setw(7) << foodArr[i][0] << setw(7) << foodArr[i][1]
        << setw(7) << foodArr[i][2] << setw(7) << foodArr[i][3] << setw(7) << foodArr[i][4] << setw(7) << foodArr[i][5] << setw(7) << foodArr[i][6] << endl;
    }
}

// averageFood function definition
// calculate the average amount of food eaten per day by all monkeys
double averageFood(const double foodArr[][NUM_COLS], int num_rows)
{
    double counter = 0.0;

    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            counter += foodArr[i][j];
        }
    }

    return counter / 7;
}

// greatestFood function definition
double greatestFood(const double foodArr[][NUM_COLS], int num_rows)
{
    double food = foodArr[0][0];

    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            if (foodArr[i][j] > food)
            {
                food = foodArr[i][j];
            }
        }
    }
    return food;
}

// leastFood function definition
double leastFood(const double foodArr[][NUM_COLS], int num_rows)
{
    double food = foodArr[0][0];

    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            if (foodArr[i][j] < food)
            {
                food = foodArr[i][j];
            }
        }
    }
    return food;
}

int main()
{
    double monkey_array[3][NUM_COLS];

    // set precision of output
    cout << fixed << setprecision(1);

    // Function calls
    inputFood(monkey_array, 3);
    printTable(monkey_array, 3);

    cout << "The average food eaten per day by all monkeys: " << averageFood(monkey_array, 3) << " pounds" << endl;
    cout << "The least amount of food eaten by any monkey: " << leastFood(monkey_array, 3)  << " pounds" << endl;
    cout << "The largest amount of food eaten per by any monkey: " << greatestFood(monkey_array, 3)  << " pounds" << endl;

    return 0;
}
