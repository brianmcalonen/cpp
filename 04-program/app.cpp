//******************************************************************
// Account Balancing
// Programmer: Brian McAlonen
// Completed : 9/13/2020
// Status    : Complete
//
// Menu driven program that allows users to keep track of their
// checkbook. Processes checks, deposits and calculates fees.
//******************************************************************

#include <iostream> // input/output declarations
#include <iomanip>  // i/o manupulator declarations
using namespace std;

// Robot class declaration
class Robot 
{
    private:
        double rpm,        // the gear motor speed in RPM
               diameter;   // the wheel diameter in inches
    
    public:
        // prototypes for member functions
        Robot();
        void setRPM(double newRPM);
        void setDiameter(double newDiameter);
        double getRPM();
        double getDiameter();
        double getSpeed();
};

// Robot constructor
Robot::Robot()
{
    rpm = 74;
    diameter = 1;
}

// RPM setter member function
void Robot::setRPM(double newRPM)
{
    if(newRPM == 74 || newRPM == 190 || newRPM == 265)
    {
        rpm = newRPM
    }
}

// RPM setter member function
void Robot::setDiameter(double newDiameter)
{
    // if new diameter is 1 to 6 inches inclusive
    if(newDiameter >= 1 && newDiameter <=6)
    {
        diameter = newDiameter;
    }
}