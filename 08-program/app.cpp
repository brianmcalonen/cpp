//******************************************************************
// Assignment 8 - Test Scores
// Programmer: Brian McAlonen
// Completed : 11/29/2020
// Status    : Complete

//
//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
using namespace std;

// Function prototypes
void inputGrades(int *, int);

// main Function definition
int main()
{
    int students = 0;
    int *grade_ptr = nullptr;

    cout << endl;
    cout << "Enter the number of students to be processed: ";
    cin >> students;


    // check students is a valid number
    if (students < 0)
    {
        cout << "Please enter a valid number of students to be processed: ";
        cin >> students;
    }

    // use the new operator to dynamically allocate an array of that size
    grade_ptr = new int[students];

    // Function calls
    inputGrades(grade_ptr, students);

    // print grade_ptr array
    for(int i = 0; i < students; i++)
    {
        cout << grade_ptr[i] << endl;
    }

    // free allocated storage
    delete [] grade_ptr;

    return 0;
}

// function to input and validate the student grades and store them in the array
void inputGrades(int *grade_ptr, int students)
{
    for(int i = 0; i < students; i++)
    {
        cout << "\nEnter Grade for Student #" << i + 1 << ": ";
        
        cin >> grade_ptr[i];

        if (grade_ptr[i] < 0 || grade_ptr[i] > 105)
        {
            cout << "Error - Please enter a valid score";
            i--;
        }
    }

}

    // Function to sort the array in ascending (increasing) order.

    // Value-returning function that returns the floating-point average of the grades.
        // Use only pointer notation in your function to calculate the average.
        // you must declare the array parameter using pointer notation instead of array notation.
        // inside the function you must use pointer notation instead of array notation to access the array elements

        // int scores[] {100, 95, 87, -1};
        // int *score_ptr {scores};
        // score_ptr = scores;
        // while(*score_ptr != -1)
        //     cout << *score_ptr++ << endl;


    // Void function that displays a neat table of student grades in sorted order.