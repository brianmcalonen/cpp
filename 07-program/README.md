Assignment 7 - Postal Packages

In the Gaddis textbook read Chapter 8 sections 8.1-8.10 and Chapter 9 section 9.1 before starting this assignment.

Lone Star Package Service ships packages within the state of Texas. Packages are accepted for shipping subject to the following restrictions:

Shipping requirements

The package weight must not exceed 50 pounds.
The package must not exceed 3 feet in length, width, or height.
The girth of the package must not exceed 5 feet. The girth is the circumference around the two smallest sides of the package. If side1, side2, and side3 are the lengths of the three sides, and largest is the largest of the three sides, then the girth can be calculated using:
girth = 2 * ( side1 + side2 + side3 - largest )
For each transaction (package to be shipped), the user should enter the package weight followed by the 3 package dimensions in any order. The weight should be specified as a whole number of pounds and the dimensions are specified as a whole number of inches.

To end the program, the user should enter a weight of -1. When the user enters -1 to end the program, they should not have to enter values for the 3 package dimensions. That is, when the user is ready to end the program, they should only have to enter the weight:

Enter package weight and 3 dimensions: -1

They should not have to enter:

Enter package weight and 3 dimensions: -1 0 0 0
Input Validation

Check to be sure that the user enters positive numbers for the package weight and dimensions (weight and dimensions must be larger than zero). For transactions with invalid weight or dimensions, print an error message and skip the transaction.

The shipping charge is based on the following table. This table may be represented in your program as parallel arrays (two one-dimensional arrays), one for the weight and one for the shipping charge. Alternatively, you may define a struct or simple class to represent one table entry (one weight and cost). Then the table would be an array of structs or an array of objects.

Note: Do not use a two-dimensional array to store the weights and costs. The weights need to be stored as integers, and the costs need to be stored as floating-point values. So they cannot be mixed in one array.

You can initialize the array elements in the array declarations using the values from the table below.

Weight

Shipping Charge

1

1.50

2

2.10

3

4.00

5

6.75

7

9.90

10

14.95

13

19.40

16

24.20

20

27.30

25

31.90

30

38.50

35

43.50

40

44.80

45

47.40

50

55.20

To determine the shipping charge, search the weight array for the package weight and then use the corresponding element from the shipping charge array. For example, the shipping charge for a 3 pound package would be $4.00. If the package weight falls between the weights in the weight table, use the larger weight. For example, the shipping charge for a 4 pound package would be 6.75. Do not hard code these values into your program code. For example, you should NOT have code like:

if ( packageWeight == 4 || packageWeight == 5)
   shippingCost = 6.75;
If you need a hint, check here:

programming assignment 7 hint

Output

Note that you should be able to write this program with only two loops, a transaction processing loop and a cost search loop. You do not need an input validation loop. If the package input is invalid, just print an error message and skip the normal package processing.

I want you to input the package information, process the package and output some information about the package in a single loop (the transaction processing loop).

Your program output should look similar to the example below.

Note: Do not store the package information in an array or vector. If you process a lot of packages, you will eventually run out of space in the array. If you use a vector, as you process more transactions you will eat up more and more memory. This program should be designed to run for long periods of time without running out of memory.

For each transaction, print:

the transaction number (start counting with 1)
whether the package was accepted or rejected
the package weight
the cost for shipping (if applicable)
When the program ends, print the number of packages accepted for shipping and the number of packages rejected. Transactions that contain invalid input should not be counted (see Input Validation section).

The screen dialog should look similar to this (user input is shown in bold):

For each transaction, enter package weight and 3 dimensions.
Enter -1 to quit.

Enter package weight and 3 dimensions: 1 2 3 3

Transaction:         1
Status     :  Accepted
Weight     :         1
Cost       :      1.50

Enter package weight and 3 dimensions: 7 4 2 3

Transaction:         2
Status     :  Accepted
Weight     :         7
Cost       :      9.90

Enter package weight and 3 dimensions: 21 12 15 12

Transaction:         3
Status     :  Accepted
Weight     :        21
Cost       :     31.90

Enter package weight and 3 dimensions: 45 12 20 2

Transaction:         4
Status     :  Accepted
Weight     :        45
Cost       :     47.40

Enter package weight and 3 dimensions: 49 24 40 20

Transaction:         5
Status     :  Rejected
Weight     :        49
Cost       :         -

Enter package weight and 3 dimensions: 25 35 30 20

Transaction:         6
Status     :  Rejected
Weight     :        25
Cost       :         -

Enter package weight and 3 dimensions: 68 10 20 10

Transaction:         7
Status     :  Rejected
Weight     :        68
Cost       :         -

Enter package weight and 3 dimensions: 50 0 10 10

Error - package weight and dimensions must be larger than 0
Please re-enter transaction

Enter package weight and 3 dimensions: 50 10 10 10

Transaction:         8
Status     :  Accepted
Weight     :        50
Cost       :     55.20

Enter package weight and 3 dimensions: 45 20 20 20

Transaction:         9
Status     :  Rejected
Weight     :        45
Cost       :         -

Enter package weight and 3 dimensions: -1

Number of accepted packages: 5
Number of rejected packages: 4


Additional Requirements:

Do not use global variables in any assignment. A global variable is a variable that is declared outside any function. It is okay to use global constants.
You must use multiple functions in this program. Do not write the program as one large main function.
Do not store the transaction information in arrays or vectors. When you store transactions in arrays, you set a limit on the number of transactions your program can process. For this program, you should be able to read and process transactions one at a time.
