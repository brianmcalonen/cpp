Assignment 4 - Robot Speed Estimator

Be sure to read through Chapter 7 Structured Data and Classes before starting this assignment. Your job is to write a program to estimate the speed of a robot. Your program will use a class called Robot to represent a robot. To keep things simple, this class will focus only on one aspect of a Robot - the maximum speed at which it can move.

Background

The speed of the robot is largely determined by two things - the speed of the gear motor and the size of the wheels that are mounted to the gear motors. The gear motor speed is typically measured in revolutions per minute (rpm). The wheel diameter will be measured in inches.

Here are some formulas and values that you will need:

pi

= 3.14159

speed in inches per minute

= rpm x wheel diameter x pi

speed in feet per minute

= speed in inches per minute / 12

Robot Class Description

Member Variables (also called data members)

Your class should have 2 floating-point member variables:

the gear motor speed in revolutions per minute
the wheel diameter in inches
Your class should not have any other member variables. All member variables should be private.
Member functions

Your class should include member functions with the given prototypes and specifications. All the member functions described below should be public member functions. Do not do any input or output in any of your member functions.

Prototypes

    Robot();
    void setRPM(double newRPM);
    void setDiameter(double newDiameter);
    double getRPM();
    double getDiameter();
    double getSpeed();
Specifications

Your class should have a default (no argument) constructor called Robot that initializes the gear motor speed to 74 rpm and the wheel diameter to 1 inch.

Your class should have a mutator function (sometimes called a setter or set function). This function should be called setRPM. This function allows the user to change the gear motor speed of the robot. The parameter newRPM specifies the new value for the gear motor speed. The new speed must be one of these speeds: 74, 190 or 265 RPM. All other values are invalid. If newRPM contains a valid value, store the information from the parameter into the member variable that represents the speed (rpm) of the gear motor. Otherwise, do not update the member variable (do nothing).

Your class should have a set member function called setDiameter that allows the member variable that stores the wheel diameter to be updated. The parameter newDiameter specifies the new value for the wheel diameter in inches. The new diameter must be one inch or larger and six inches or smaller. Another way to say this is that the new diameter must be in the range 1 to 6 inches inclusive. If newDiameter is valid, store the new diameter in the member variable for the wheel diameter. Otherwise, do nothing (do not update the member variable).

Your class should have an accessor (or getter or get) member function called getRPM. This function should return the speed of the gear motor in revolutions per minute.

Your class should have a get member function called getDiameter that returns the diameter of the robot's wheel in inches.

Your class should have a get member function called getSpeed that returns the speed of the robot in feet per minute.

Testing
Write a main function to test your class. Be sure that your output shows that each of your member functions works correctly.

Be sure that the constructor correctly initializes a Robot object.
Be sure that the setRPM member function works correctly. It must be tested for both valid and invalid values provided by parameter.
Be sure that the setDiameter member function works correctly. It must be tested for both valid and invalid values provided by parameter.
Be sure that the getRPM, getDiameter and getSpeed member functions return the correct values.
Other Requirements

Global variables are variables that are declared outside any function. Do not use global variables in your programs. Declare all your variables inside functions. Note that here we are talking about "regular" variables and not member variables of a class.