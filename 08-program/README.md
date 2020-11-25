Assignment 8 - Test Scores

Be sure to read through Chapter 10 before starting this assignment. Your job is to write a program to process test scores for a class.

Input Data

You will input a test grade (integer value) for each student in a class.

Validation

Tests are graded on a 100 point scale with a 5 point bonus question. So a valid grade should be 0 through 105, inclusive.

Processing

Your program should work for any number of students. When the program starts, it should ask the user for the number of students to be processed. Then it should use the new operator to dynamically allocate an array of that size.

The program should then:

Call a function to input and validate the student grades and store them in the array.
Call a function to sort the array in ascending (increasing) order.
Call a value-returning function that returns the floating-point average of the grades.
Call a function that displays a neat table of student grades in sorted order. Include appropriate column headings for your table. Following the table, display the average score with appropriate label.
In general, you should use array notation when processing arrays because it makes your code easier to read and understand. However, to give you some practice using pointers with an array, I want you to use only pointer notation in your function to calculate the average. That is, you must declare the array parameter using pointer notation instead of array notation, and inside the function you must use pointer notation instead of array notation to access the array elements. If you do not understand this requirement, contact me.

Sample Output

        Grade
        -----
           75
           81
           88
        -----
Average  81.3
Requirements/Hints:

Global variables are variables that are declared outside any function. Do not use global variables in your programs. Declare all your variables inside functions
Extra Credit:

For 5% extra credit, include the student's name along with the grade. Use a struct to hold the name and grade for one student. The name should be a C++ string object. Your array will now be an array of structs. Your program output should look something like:

Name                  Score
---------------------------
Jim Smith                75
Victor Montero           81
Christa Kim              88
---------------------------
Average                81.3

Important: to receive the extra credit
you must turn in both versions of your program -
the version with grades only and the version with names and grades.
