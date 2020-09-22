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
        void setRPM(double newRPM);
        void setDiameter(double newDiamester);
        double getRPM();
        double getDiameter();
        double getSpeed();
}