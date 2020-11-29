//******************************************************************
// Assignment 8 - Test Scores
// Programmer: Brian McAlonen
// Completed : 11/29/2020
// Status    : Complete

// Program to calculate the average test score of a group of
// students using pointers and pointer notation.
//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
#include <algorithm>
using namespace std;

// Function prototypes
void inputGrades(int *, int);
void sortGrades(int *, int);
double averageGrades(int *, int);
void printGrades(int *, int);

// main Function definition
int main()
{
    // set students variable equal to 0
    int students = 0;
    // set pointer to an int equal to null
    int *grade_ptr = nullptr;

    // prompt the user for the number of students
    cout << "\nEnter the number of students to be processed: ";
    // set the students variable equal to the user's input
    cin >> students;

    // check if number students is a valid number
    if (students < 1)
    {
        // print an error message
        cout << "\nPlease enter a valid number of students to be processed." << endl;
        // restart the main program
        main();
    }

    // use the new operator to dynamically allocate an array of that size
    grade_ptr = new int[students];

    // function calls
    inputGrades(grade_ptr, students);
    sortGrades(grade_ptr, students);
    printGrades(grade_ptr, students);

    // free allocated storage
    delete [] grade_ptr;

    return 0;
}

// function to input and validate the student grades and store them in the array
void inputGrades(int *grade_ptr, int students)
{
    // loop for each student
    for(int i = 0; i < students; i++)
    {
        // prompt user for grade for specific student
        cout << "\nEnter Grade for Student #" << i + 1 << ": ";
        // put the grade into the grade array via the pointer
        cin >> grade_ptr[i];

        // if the grade entered by the user is invalid
        if (grade_ptr[i] < 0 || grade_ptr[i] > 105)
        {
            // print an error message
            cout << "\nError - Please enter a valid score" << endl;
            // decrement the loops index
            i--;
        }
    }

}

// Function to sort the array in ascending (increasing) order.
void sortGrades(int *grade_ptr, int students)
{
    // use the sort method to sort grades in ascending order
    sort(grade_ptr, grade_ptr + students);
}

// Value-returning function that returns the floating-point average of the grades.
double averageGrades(int *grade_ptr, int students)
{
    // variable to hold the total scores from all grades
    double total = 0.0;

    // for each students grade
    for(int i = 0; i < students; i++)
    {
        // use pointer notation to add the student's grade to the total
        total += *(grade_ptr + i);
    }

    // return the average of all students test scores
    return total / students;
}

// Void function that displays a neat table of student grades in sorted order.
void printGrades(int *grade_ptr, int students)
{
    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // print the output header
    cout << endl;
    cout << setw(9) << left << " " << setw(6) << right << "Grades" << endl;
    cout << setw(9) << left << " " << setw(6) << right << "------" << endl;

    // loop for each student
    for(int i = 0; i < students; i++)
    {
        // print each students test score
        cout << setw(9) << left << " " << setw(6) << right << grade_ptr[i] << endl;
    }

    // print the average test score of all students
    cout << setw(9) << left << " " << setw(6) << right << "------" << endl;
    cout << setw(9) << left << "Average" << setw(6) << right << averageGrades(grade_ptr, students) << endl;
    cout << endl;
}
