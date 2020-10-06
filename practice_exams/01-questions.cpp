#include <iostream>
#include <iomanip> 

///////////////////////////////////////////////////////////////////////////////
// Question 1

// Memory locations that can hold data are called
// 	[]	operators.
// 	[x]	variables.
// 	[]	syntax.
// 	[]	operands.
// 	[]	None of these



///////////////////////////////////////////////////////////////////////////////
// Question 2

// Characters or symbols that perform operations on one or more operands are
// 	[]	syntax.
// 	[]	op codes.
// 	[x]	operators.
// 	[]	program ops.
// 	[]	None of these



///////////////////////////////////////////////////////////////////////////////
// Question 3

// Write a function call for a function named distance. The function should 
// return a double and have two floating-point arguments for rate and time.

double distance(5.0, 9.9);

///////////////////////////////////////////////////////////////////////////////
// Question 4

// Write a C++ loop that validates user input for a number between 1 through 
// 100 inclusive.
// Proper indentation is required. Use the space bar (4 spaces for one tab). 
// Do NOT use the tab key inside the text box.

double number;
cout << "Enter a number: " << endl;
cin >> number;

while (number < 1 || number > 100)
{
    cout << "Your number must be between 1 - 100 inclusive." << endl;
    cout << "Enter a number: " << endl;
    cin >> number;
}

///////////////////////////////////////////////////////////////////////////////
// Question 5

// Write a function prototype for a function named distance. 
// The function should return a double and have two double parameters: 
// rate and time

double distance(double rate, double time);

///////////////////////////////////////////////////////////////////////////////
// Question 6

// Write the prototype for a void function named showFees that has 2 parameters, 
// a string value and a floating-point value.

void showFees(string, float);


///////////////////////////////////////////////////////////////////////////////
// Question 7

// Write a function named distance that accepts two floating-point arguments 
// for rate and time. The function should return the distance traveled given 
// a rate of travel and the time traveled.

double distance(float rate, float time)
{
    return rate * time;
}

///////////////////////////////////////////////////////////////////////////////
// Question 8

// Write the stub for a value-returning function named ticketRate that has 1 
// parameter named category (a character) and returns the cost of a ticket 
// (a floating-point).



///////////////////////////////////////////////////////////////////////////////
// Question 9

// Write a function header for a function named distance. The function should 
// return a double and have two double parameters: rate and time.

double distance(double rate, double time)