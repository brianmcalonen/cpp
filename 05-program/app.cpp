//******************************************************************
// Assignment 5 - Payroll Version 1.0
// Programmer: Brian McAlonen
// Completed : 10/11/2020
// Status    : Complete

// Payroll program for Armadillo Automotive Group the takes employee
// data, then calculates and displays gross pay, net pay, and taxes.
//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
#include <string>   // use string class
using namespace std;

struct Employee
{
    int id_number;    // employee's ID number
    string full_name; // employee's full name
    double pay_rate;  // employee's hourly rate of pay
    int emp_type;     // union = 0 or management = 1
};

int main()
{

    const int NUM_EMPLOYEES = 4; // number of employees
    const double TAX_RATE = .15; // tax rate for employees

    int id;        // user entered ID number
    string name;   // user entered full name
    double rate;   // user entered hourly rate of pay
    int work_type; // user entered employee type (0 or 1)

    double gross_pay;       // employee's calculated gross pay
    double net_pay;         // employee's calculated net pay
    double tax;             // employee's calculated tax amount
    double total_net = 0;   // all employee's total net pay
    double total_gross = 0; // all employee's total gross pay

    // array to hold 4 structs of employee information
    Employee employee_array[NUM_EMPLOYEES];

    // array to hold the number of hours worked by each employee
    double hours[NUM_EMPLOYEES];

    // loop for each employee
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Enter information for Employee #" << (i + 1) << endl;
        // get employee's ID number
        cout << "Employee ID: ";
        cin >> id;

        // validate the user's input for positive employee number
        while (id <= 0)
        {
            // get employee's ID number
            cout << "Enter a positive Employee ID: ";
            cin >> id;
        }

        // clear buffer before taking new line
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // get the employee's name
        cout << "Employee Name: ";
        getline(cin, name);

        // validate the employee's name is 20 characters max
        while (name.length() < 1 || name.length() > 20)
        {
            // get the employee's name
            cout << "Enter a name that's at most 20 characters: ";
            getline(cin, name);
        }

        // get the employee's pay rate
        cout << "Pay Rate: ";
        cin >> rate;

        // validate the user's input for positive pay rate
        while (rate <= 0)
        {
            // get the employee's pay rate
            cout << "Enter a positive pay rate: ";
            cin >> rate;
        }

        // get the employee's work type
        cout << ("Type: ");
        cin >> work_type;

        // validate the user's input for employee type
        while (work_type != 0 && work_type != 1)
        {
            // get the employee's work type
            cout << "Enter the employee's type: (0 for union, 1 for management) ";
            cin >> work_type;
        }

        // set specific employee's struct id
        employee_array[i].id_number = id;
        // set specific employee's struct name
        employee_array[i].full_name = name;
        // set specific employee's struct rate
        employee_array[i].pay_rate = rate;
        // set specific employee's struct type
        employee_array[i].emp_type = work_type;
    }

    cout << "\nEnter timecard information for each employee" << endl;

    // loop through all employees
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        // get the hours worked for a specific employee
        cout << "Hours worked for " << employee_array[i].full_name << ": ";
        cin >> hours[i];

        // validate the user's input for hours worked
        while (hours[i] < 0)
        {
            // get the hours worked for a specific employee
            cout << "Hours worked for " << employee_array[i].full_name << ": ";
            cin >> hours[i];
        }
    }

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    cout << "\nPayroll Report\n" << endl;

    // display the header with formatted columns
    cout << left << setw(3) << "ID" << left << setw(20) << "Name"
         << right << setw(10) << "Gross Pay" << right << setw(10)
         << "Tax" << right << setw(10) << "Net Pay" << endl;

    // loop for each employee
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        // check if employee is a union member (type: 0)
        if (employee_array[i].emp_type == 0)
        {
            // calculate pay when union employee worked overtime
            if (hours[i] > 40)
            {
                // calculate gross pay
                gross_pay = ((hours[i] - 40) * 1.5 * employee_array[i].pay_rate) + 40 * employee_array[i].pay_rate;
                // calculate taxes
                tax = gross_pay * TAX_RATE;
                // calculate net pay
                net_pay = gross_pay - tax;

                // add employee's gross pay to total gross pay
                total_gross += gross_pay;
                // add employee's net pay to total net pay
                total_net += net_pay;
            }
            // calculate pay when union employee did not work overtime
            else
            {
                // calculate gross pay
                gross_pay = hours[i] * employee_array[i].pay_rate;
                // calculate taxes
                tax = gross_pay * TAX_RATE;
                // calculate net pay
                net_pay = gross_pay - tax;

                // add employee's gross pay to total gross pay
                total_gross += gross_pay;
                // add employee's net pay to total net pay
                total_net += net_pay;
            }
        }
        // employee is management (type: 1)
        else
        {
            // calculate gross pay
            gross_pay = hours[i] * employee_array[i].pay_rate;
            // calculate taxes
            tax = gross_pay * TAX_RATE;
            // calculate net pay
            net_pay = gross_pay - tax;

            // add employee's gross pay to total gross pay
            total_gross += gross_pay;
            // add employee's net pay to total net pay
            total_net += net_pay;
        }

        // display payroll information for specific employee
        cout << left << setw(3) << employee_array[i].id_number << left << setw(20) 
            << employee_array[i].full_name << right << setw(10) << gross_pay << 
            right << setw(10) << tax << right << setw(10) << net_pay << endl;
    }

    // display total gross pay
    cout << "\nTotal Gross Pay $" << total_gross << endl;

    // display total net pay
    cout << "Total Net Pay $" << total_net << endl;

    // continue program
    system("pause");

    return 0;
}