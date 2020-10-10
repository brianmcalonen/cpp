#include <iostream>
#include <iomanip> 

Chapter 1 - Intro to Programming
Computers can do many different jobs because they can be programmed.
Internally, the CPU consists of the arithmetic logic unit (ALU) and the control unit.
The two general categories of software are operating systems and application software.
Since computer’s can’t be programmed in natural human language, algorithms must be written in a programming language.
High-level languages are close to the level of humans in terms of readability.
A program’s ability to run on several different types of computer systems is called portability.
Words or names defined by the programmer are called programmer-defined symbols.
Punctuation characters or symbols mark the beginning or ending of programming statements.
A variable is a named storage location.
The three primary activities of a program are input, processing, and output.
Output is information a program sends to the outside world.
Main memory, or RAM, is volatile, which means its contents are erased when power is removed from the computer. Secondary memory, such as a disk, CD, or flash drive, does not lose its contents when power is removed from the computer.
RAM stands for Random Access Memory.
ALU stands for Arithmetic and Logic Unit.

Chapter 2 - Intro to C++
Every complete C++ statement ends with a semicolon.
Every C++ program must have a function named main.
A group of statements, such as the body of a function, must be enclosed in braces {}.
978.65 X 10^12 would be written in E notation as 9.7865E14.
A variable’s scope is the part of the program that has access to the variable.
The modulus operator computes the remainder of doing integer division.
Comments are notes of explanation that document lines or sections of a program.
Single line comment: //		Multi-line comment: /*   */
Programming style refers to the way a programmer uses identifiers, spaces, tabs, blank lines, and punctuation characters to visually arrange a program’s source code. These are some, but not all, of the elements of programming style.
int main() { return 0; }

Chapter 3 - Expressions and Interactivity
Header files: 		// #include <iostream>	using namespace std;
<cmath> - perform mathematical functions like sqrt or pow
<iostream> - use cin and cout 
<iomanip> - use stream manipulators like setprecision or setw
<cstdlib> -  use random numbers
<fstream> - perform file operations
<string> - use string objects
cin can be used to read data typed at the keyboard
An expression is something that can be evaluated to produce a single value.
Precedence of Arithmetic Operators: 1. ( ), 2. - unary aka negative value, 3. binary * / or %, 4. binary + or -
Associativity is the order in which an operator works with its operands.
No exponent operator in C++. Must use library function:	    area = pow(4.0, 2);
Data type ranking: long double, double, float, unsigned long long int, long long int, unsigned int, int
A type case expression lets you manually promote or demote a value:  static_cast<DataType>(Value)
double number = 3.7;	int val;		val = static_cast<int>(number);   // val is 3
When a value cannot fit in the number of bits provided by a variable’s data type, overflow or underflow occurs.
A named constant, also called a constant variable, is like a variable, but its content is rad-only and cannot be changed while the program is running. Must be initialized with a value.      	// const double INTEREST_RATE = 0.041; 
Multiple assignments means to assign the same value to several variables with one statement. // x = y = z = 12;
Combined assignment operators: 		// x += 5;     same as    x = x + 5;
Formatting output: 		
cout << fixed << setprecision(2);	// for $ amounts
cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
cout << left << setw(6) << num4 << right << setw(6) << num5 << left << setw(6) << num6 << endl;
Inputting a string with spaces: 	string name; cout << “Enter name: “; getline(cin, name); cout << name;
cin.get();  is a member function of cin. Reads a single character, including whitespace characters.
cin.ignore(number, character);  skip one or more characters in the keyboard buffer
Random numbers: 		dice = rand() % 6 + 1;
number = (rand() % (maxValue - MinValue + 1)) + minValue; 	// random number in range inclusive
Seeding random numbers:


Chapter 4 - Making Decisions
An expression using the greater-than, less-than, greater-than-or-equal-to, less-than-or-equal-to, equal, or not-equal operator is called a relational expression.
The if statement regards an expression with the value 0 as false and an expression with a nonzero value as true.
In an if/else statement, the if part executes its statements if the expression is true, and the else part executes its statements if the expression is false.
If the subexpression on the left of the && logical operator is false, the right expression is not checked.
The ! logical operator has higher precedence than the other logical operators.
The && logical operator works best when testing a number to determine if it’s within a range.
A variable with block(or local) scope is only visible when the program is executing in the block containing the variable’s definition.
A program will “fall through” to the following case section if it is missing the break statement.
Relational operators allow you to compare numeric and char values.
The if statement can cause other statements to execute only under certain conditions.
A flag is a variable that signals whether or not some condition currently exists in a program. // bool quotaMet = false;
Integer flags are also allow, set to 0 for false or 1 for true.
The if/else statement executes one set of statements when the if condition is true and another set of statements if false.
Be careful comparing floating-point numbers because of lack of precision or round-off errors.
The if/else if statement is a chain of if statements. They perform their tests, one after another, until one is found to be true.
A trailing else is a final else that is placed at the end of an if/else if statement Provides default action & catches errors.
Menu is a set of choices presented to the user. Menu-driven program allows the user to determine the course using menu
To test more than one condition, an if statement can be nested inside another if statement. (nested if)

