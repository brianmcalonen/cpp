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



Chapter 5 - Looping
To increment a value means to increase it by one.
When the increment or decrement operator is placed before the operand (or to the operand’s left), the operator is being used in the prefix mode.
The statement or block that is repeated is known as the body of the loop.
A loop that evaluates its test expression before each repetition is a pretest loop.
A loop that does not have a way of stopping is known as an infinite loop.
A running total is a sum of numbers that accumulates with each iteration of a loop.
A sentinel is a special value that marks the end of a series of values.
The do-while loop always iterates at least once.
Inside the for loop’s parentheses, the first expression is the initialization, the second expression is the test, and the third expression is the update.
The break statement causes a loop to terminate immediately.
If you open an output file and the file already exists, it will be erased and a new file with the same name will be created.
What is a file’s read position? It marks the location of the next byte to read.
Where is the read position when the file is first opened for reading? First byte in the file.

Chapter 6 - Functions
The header is the part of a function definition that shows the function name, return type, and parameter list.
If the function showValue has the following header: void showValue(int quantity) you would use the showVaule(5) to call it with the argument 5.
Values that are sent into a function are called arguments.
When only a copy of an argument is passed to a function, it is said to be passed by value.
A local variable is defined inside a function and is not accessible outside the function.
Global variables provide an easy way to share large amounts of data among all the functions in a program.
If a function has a local variable with the same name as a global variable, only the local variable can be seen by the function.
The return statement causes a function to end immediately.
When a function uses a mixture of parameters with and without default arguments, the parameters with default arguments must be defined last.
When used as parameters, reference variables allow a function to access the parameter’s original argument.
Reference variables allow arguments to be passed by reference.
Two or more functions may have the same name, as long as their parameter lists are different.
What is the difference between an argument and a parameter value? Arguments appear in the parentheses of a function call. They are the actual values passed to a function. Parameters appear in the parentheses of a function heading. They are the variables that receive the arguments.
What does it mean to overload a function? Function overloading means including more than one function in the same program that has the same name. C++ allows this providing the overloaded functions can be distinguished by having different parameter lists.
Give an example of where an argument should be passed by reference. You want the function to change the value of a variable that is defined in the calling function.
Can a function have a local variable with the same name as a global variable? Yes, but within that function only the local variable can be “seen” or accessed.
Return Values - A function that returns a value must have a return statement. The data type of the return value also must match the method’s declared return type;
On the other hand, a void function (one that does not return anything) does not require a return statement.
Parameters - Function parameters are placeholders for values passed to the function. They act as variables inside a function.
Here, x is a parameter that holds a value of 10 when it’s called.
Functions - A function is a set of statements that are executed together when the function is called. Every function has a name, which is used to call the respective function.
Built-in Functions - C++ has many built-in functions. In order to use them, we have to import the required library using #include.
Calling a Function - In C++, when we define a function, it is not executed automatically. To execute it, we need to “call” the function by specifying its name followed by a pair of parentheses ().
void Functions - In C++, if we declare the type of a function as void, it does not return a value. These functions are useful for a set of statements that do not require returning a value.
Function Declaration & Definition
A C++ function has two parts: Function declaration & Function definition
The declaration includes the function’s name, return type, and any parameters. The definition is the actual body of the function which executes when a function is called. The body of a function is typically enclosed in curly braces.
Function Arguments - the values passed to a function are known as arguments. They represent the actual input values.
Scope of Code - The scope is the region of code that can access or view a given element:
Variables defined in global scope are accessible throughout the program.
Variables defined in a function have local scope and are only accessible inside the function.
Function Declarations in Header file
C++ functions typically have two parts: declaration and definition. Function declarations are generally stored in a header file (.hpp or .h) and function definitions (body of the function that defines how it is implemented) are written in the .cpp file.
Function Template - A function template is a C++ tool that allows programmers to add data types as parameters, enabling a function to behave the same with different types of parameters. The use of function templates and template parameters is a great C++ resource to produce cleaner code, as it prevents function duplication.
Default Arguments - In C++, default arguments can be added to function declarations so that it is possible to call the function without including those arguments. If those arguments are included the default value is overwritten. Function parameters are read from left to right, so default parameters should be placed from right to left.
Functions Definitions In C++, it is common to store function definitions in a separate .cpp file from the main() function. This separation results in a more efficient implementation. Note: If the file containing the main() function needs to be recompiled, it is not necessary to recompile the files containing the function definitions.
Function Overloading
In C++, function overloading enables functions to handle different types of input and return different types. It allows multiple definitions for the same function name, but all of these definitions must differ in their arguments.
Inline Functions - An inline function is a function definition, usually in a header file, qualified by the inline keyword, which advises the compiler to insert the function’s body where the function call is. If a modification is made in an inline function, it would require all files containing a call to that function to be recompiled.	`gedkerdiuujcriclhchlivdlhcbttdeglfgdinbtnthcgclkbgbidtuiunujigbu

Chapter 7 - Intro to Classes and Objects
What does ADT stand for? Abstract Data Type
The two common programming methods in practice today are procedural programming and object-oriented programming.
An object is a software entity that combines both data and procedures (i.e., functions) in a single unit.
Creating a class object is often called instantiating the class.
An object’s data items are stored in its member variables.
Bundling together an object’s data and procedures is called encapsulation.
Normally a class’s member variables are declared to be private, and its member functions are declared to be public.
A class member function that changes the value of a member variable is called a mutator.
A class constructor is a member function with the same name as the class.
Constructors cannot have a return type.
A destructor is a member function that is automatically called when an object is destroyed.
A constructor whose parameters all have default values is a default constructor.
A class may only have one default constructor and one destructor.
When a member functions forms part of the interface through which a client program can use the class, the function must be public.
A class object can be passed to a function but cannot be returned by a function. False. It can be both passed to a function and returned from a function.
It is considered good programming practice to store the declaration for a class, its function definitions, and the client program that uses the class in separate (i.e., each in their own file) files.
If you were writing the definitions for the Canine class member functions and wanted to place these in their own file, what should you name the file? Canine.cpp


