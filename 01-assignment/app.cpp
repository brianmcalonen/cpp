// Brian McAlonen
// Program Status: COMPLETE

// This program takes two integer values from the user, then calculates and displays on the screen:

// the sum of the integers
// the product of the integers
// the result of dividing the first integer by the second using integer division (integer quotient)
// the remainder after dividing the first integer by the second (integer remainder)
// the result of dividing the first integer by the second using floating-point division (floating-point quotient)
// the average of the integers (use floating-point division)

# include <iostream>
# include <iomanip> // allows use of setprecision
using namespace std;

// main function 
int main()
{
    // declare variables for main function
    int num1, num2, sum, product, intQuotient, intRemainder;
    float floatQuotient, average;

    // prompt the user for the first number
    cout << "Enter the first number: ";
    // set num1 equal to the user's input
    cin >> num1;

    // prompt the user for the second number
    cout << "Enter the second number: ";
    // set num2 equal to the user's input
    cin >> num2;

    // calculate arithmetic values to display
    sum = num1 + num2;
    product = num1 * num2;
    intQuotient = num1 / num2;
    intRemainder = num1 % num2;
    floatQuotient = (float)num1 / num2;
    average = (float)(num1 + num2) / 2;

    // display the calculated values in the console
    cout << "\nSum:\t" << "is " << sum << endl;
    cout << "Product:\t" << "is " << product << endl;
    cout << "Interger Quotient:\t" << "is " << intQuotient << endl;
    cout << "Interger Remainder:\t" << "is " << intRemainder << endl;
    cout << "Floating-Point Quotient:\t" << "is " << setprecision(5) << floatQuotient << endl;
    cout << "Average:\t" << "is " << average << endl;

    return 0;
}