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
    const double TAX_RATE = .15;

    // array to hold 4 structs
    Employee employee_array[NUM_EMPLOYEES];

    int id;
    string name;
    double rate;
    int work_type;
    double hours[NUM_EMPLOYEES];
    double gross_pay;
    double net_pay;


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

    cout << "Enter timecard information for each employee" << endl;

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Hours worked for " << employee_array[i].full_name << ": ";
        cin >> hours[i];
    }

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    cout << "Payroll Report\n" << endl;

    cout << left << setw(3) << "ID" << left << setw(20) << "Name" 
    << right << setw(10) << "Gross Pay" << right << setw(10) 
    << "Tax" << right << setw(10) << "Net Pay" << endl;

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        // check if employee is a union member (type: 0)
        if(employee_array[i].emp_type == 0)
        {
            // calculate pay when union employee worked overtime
            if(hours[i] > 40)
            {
                gross_pay = ((hours[i] - 40) * 1.5 * employee_array[i].pay_rate) + 40 * employee_array[i].pay_rate;
                net_pay = gross_pay + gross_pay * TAX_RATE;  
            }
            // calculate pay when union employee did not work overtime
            else{
                gross_pay = hours[i] * employee_array[i].pay_rate;
                net_pay = gross_pay + gross_pay * TAX_RATE;  
            }
        }
        // employee is management (type: 1)
        else    
        {
            gross_pay = hours[i] * employee_array[i].pay_rate;
            net_pay = gross_pay + gross_pay * TAX_RATE;
        }

    }

    // cout << employee_array[0].id_number << endl;
    // cout << employee_array[0].full_name << endl;
    // cout << employee_array[0].pay_rate << endl;
    // cout << employee_array[0].emp_type << endl;
    // cout << employee_array[1].id_number << endl;
    // cout << employee_array[1].full_name << endl;
    // cout << employee_array[1].pay_rate << endl;
    // cout << employee_array[1].emp_type << endl;
    // cout << employee_array[2].id_number << endl;
    // cout << employee_array[2].full_name << endl;
    // cout << employee_array[2].pay_rate << endl;
    // cout << employee_array[2].emp_type << endl;
    // cout << employee_array[3].id_number << endl;
    // cout << employee_array[3].full_name << endl;
    // cout << employee_array[3].pay_rate << endl;
    // cout << employee_array[3].emp_type << endl;

    return 0;
}