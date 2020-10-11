//******************************************************************
// Assignment 5 - Payroll Version 1.0
// Programmer: Brian McAlonen
// Completed : 10/11/2020
// Status    : Complete

// Payroll program for Armadillo Automotive Group

// Your program should first input the employee master information
// into an array of structs. Then use a separate loop to do the
// payroll processing for each employee (input the employee's hours
// worked and calculate their pay

//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
#include <string>   //
using namespace std;

// The employee master information consists of the following data:
// employee ID number (integer value)
// employee name (your program should handle names of up to 20 characters - may contain spaces)
// pay rate per hour (floating-point value)
// type of employee (0 for union, 1 for management)

struct Employee
{
    int id_number;
    string full_name;
    double pay_rate;
    int emp_type;
};

int main()
{
    const int NUM_EMPLOYEES = 4;

    // array to hold 4 structs
    Employee employee_array[NUM_EMPLOYEES];

    int id;
    string name;
    double rate;
    int work_type;

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Enter information for employee " << (i + 1) << endl;
        cout << "Employee ID: ";
        cin >> id;
        // clear buffer before taking new line
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Employee Name: ";
        getline(cin, name);
        cout << "Pay Rate: ";
        cin >> rate;
        cout << ("Type: ");
        cin >> work_type;

        employee_array[i].id_number = id;
        employee_array[i].full_name = name;
        employee_array[i].pay_rate = rate;
        employee_array[i].emp_type = work_type;

        // clear buffer before taking new line
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    cout << employee_array[0].id_number << endl;
    cout << employee_array[0].full_name << endl;
    cout << employee_array[0].pay_rate << endl;
    cout << employee_array[0].emp_type << endl;
    cout << employee_array[1].id_number << endl;
    cout << employee_array[1].full_name << endl;
    cout << employee_array[1].pay_rate << endl;
    cout << employee_array[1].emp_type << endl;
    cout << employee_array[2].id_number << endl;
    cout << employee_array[2].full_name << endl;
    cout << employee_array[2].pay_rate << endl;
    cout << employee_array[2].emp_type << endl;
    cout << employee_array[3].id_number << endl;
    cout << employee_array[3].full_name << endl;
    cout << employee_array[3].pay_rate << endl;
    cout << employee_array[3].emp_type << endl;

    return 0;
}