//******************************************************************
// Assignment 5 - Payroll Version 1.0
// Programmer: Brian McAlonen
// Completed : 10/11/2020
// Status    : Complete
//
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
    Employee me;

    return 0;
}