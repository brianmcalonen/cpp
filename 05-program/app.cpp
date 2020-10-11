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

#include <iostream>  // input/output declarations
#include <iomanip>   // i/o manupulator declarations
#include <string>    //
using namespace std; //

struct Employee
{
    int id_number;    // employee's ID number
    string full_name; // employee's full name
    double pay_rate;  // employee's hourly rate of pay
    int emp_type;     // union = 0 or management = 1
};

int main()
{

    const int NUM_EMPLOYEES = 4; //
    const double TAX_RATE = .15; //

    int id;        // user entered ID number
    string name;   // user entered full name
    double rate;   // user entered hourly rate of pay
    int work_type; // user entered employee type (0 or 1)

    double gross_pay; // employee's calculated gross pay
    double tax;       // employee's calculated tax amount
    double net_pay;   // employee's calculated net pay

    // array to hold 4 structs of employee information
    Employee employee_array[NUM_EMPLOYEES];

    // array to hold the number of hours worked by each employee
    double hours[NUM_EMPLOYEES];

    // loop for each employee
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        // get employee's information
        cout << "Enter information for Employee #" << (i + 1) << endl;
        cout << "Employee ID: ";
        cin >> id;

        // validate the user's input for positive employee number
        while (id <= 0)
        {
            cout << "Enter a positive Employee ID: ";
            cin >> id;
        }

        // clear buffer before taking new line
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Employee Name: ";
        getline(cin, name);

        cout << "Pay Rate: ";
        cin >> rate;

        // validate the user's input for positive pay rate
        while (rate <= 0)
        {
            cout << "Enter a positive pay rate: ";
            cin >> rate;
        }

        cout << ("Type: ");
        cin >> work_type;

        // validate the user's input for employee type
        while (work_type != 0 && work_type != 1)
        {
            cout << "Enter the employee's type: (0 for union, 1 for management) ";
            cin >> work_type;
        }

        // set specific employee's struct information
        employee_array[i].id_number = id;
        employee_array[i].full_name = name;
        employee_array[i].pay_rate = rate;
        employee_array[i].emp_type = work_type;

        // clear buffer before taking new line
        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nEnter timecard information for each employee" << endl;

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Hours worked for " << employee_array[i].full_name << ": ";
        cin >> hours[i];

        // validate the user's input for hours worked
        while (hours[i] < 0)
        {
            cout << "Enter the employee's hours worked: ";
            cin >> hours[i];
        }
    }

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    cout << "Payroll Report\n"
         << endl;

    cout << left << setw(3) << "ID" << left << setw(20) << "Name"
         << right << setw(10) << "Gross Pay" << right << setw(10)
         << "Tax" << right << setw(10) << "Net Pay" << endl;

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        // check if employee is a union member (type: 0)
        if (employee_array[i].emp_type == 0)
        {
            // calculate pay when union employee worked overtime
            if (hours[i] > 40)
            {
                gross_pay = ((hours[i] - 40) * 1.5 * employee_array[i].pay_rate) + 40 * employee_array[i].pay_rate;
                tax = gross_pay * TAX_RATE;
                net_pay = gross_pay - tax;
            }
            // calculate pay when union employee did not work overtime
            else
            {
                gross_pay = hours[i] * employee_array[i].pay_rate;
                tax = gross_pay * TAX_RATE;
                net_pay = gross_pay - tax;
            }
        }
        // employee is management (type: 1)
        else
        {
            gross_pay = hours[i] * employee_array[i].pay_rate;
            tax = gross_pay * TAX_RATE;
            net_pay = gross_pay - tax;
        }

        // display payroll information for employee
        cout << left << setw(3) << employee_array[i].id_number << left << setw(20) << employee_array[i].full_name
             << right << setw(10) << gross_pay << right << setw(10)
             << tax << right << setw(10) << net_pay << endl;
    }

    return 0;
}