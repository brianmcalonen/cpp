//******************************************************************
// Assignment 9 - Payroll Version 2.0
// Programmer: Brian McAlonen
// Completed : 12/08/2020
// Status    : Complete

//
//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
using namespace std;

class Employee
{
  private:
    int id;             // employee ID
    string name;        // employee name
    double hourlyPay;   // pay per hour
    int numDeps;        // number of dependents
    int type;           // employee type

  public:
    Employee( int initId=0, string initName="",
              double initHourlyPay=0.0,
              int initNumDeps=0, int initType=0 );  // Constructor

    bool set(int newId, string newName, double newHourlyPay,
             int newNumDeps, int newType);

    int get_id();
    string get_name();
    double get_hourlyPay();
    int get_numDeps();
    int get_type();
};

// Employee constructor method
Employee::Employee( int initId, string initName,
                    double initHourlyPay,
                    int initNumDeps, int initType )
{
  bool status = set( initId, initName, initHourlyPay,
                     initNumDeps, initType );

  if ( !status )
  {
    id = 0;
    name = "";
    hourlyPay = 0.0;
    numDeps = 0;
    type = 0;
  }
}

// Employee set method
bool Employee::set( int newId, string newName, double newHourlyPay,
                                 int newNumDeps, int newType )
{
  bool status = false;

  if ( newId > 0 && newHourlyPay > 0 && newNumDeps >= 0 &&
       newType >= 0 && newType <= 1 )
  {
    status = true;
    id = newId;
    name = newName;
    hourlyPay = newHourlyPay;
    numDeps = newNumDeps;
    type = newType;
  }
  return status;
}

// Employee get_id method
int Employee::get_id() { return id; }

// Employee get_name method
string Employee::get_name() { return name; }

// Employee get_hourlyPay method
double Employee::get_hourlyPay() { return hourlyPay; }

// Employee get_numDeps method
int Employee::get_numDeps() { return numDeps; }

// Employee get_type method
int Employee::get_type() { return type; }
