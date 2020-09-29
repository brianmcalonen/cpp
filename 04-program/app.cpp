//******************************************************************
// Assignment 4 - Robot Speed Estimator
// Programmer: Brian McAlonen
// Completed : 9/27/2020
// Status    : Complete
//
// Design a class called Robot that will calculate the estimated 
// speed of a robot using it's gear motor speed and wheel diameter.
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

///////////////////////////////////////////////////////////////
// Robot Default Constructor
///////////////////////////////////////////////////////////////

Robot::Robot()
{
    // initialize default value for gear motor speed
    rpm = 74;
    // initialize default value for wheel diameter
    diameter = 1;
}

///////////////////////////////////////////////////////////////
// RPM Setter Member Function
///////////////////////////////////////////////////////////////

void Robot::setRPM(double newRPM)
{
    // checks if the newRPM is an allowed value
    if(newRPM == 74 || newRPM == 190 || newRPM == 265)
    {
        // if value is allowed, set rpm to newRPM
        rpm = newRPM;
    }
}

///////////////////////////////////////////////////////////////
// Diameter Setter Member Function
///////////////////////////////////////////////////////////////

void Robot::setDiameter(double newDiameter)
{
    // if new diameter is 1 to 6 inches inclusive
    if(newDiameter >= 1 && newDiameter <=6)
    {
        // set diameter to the newDiameter
        diameter = newDiameter;
    }
}

///////////////////////////////////////////////////////////////
// RPM Getter Member Function
///////////////////////////////////////////////////////////////

double Robot::getRPM()
{
    // return the value of the rpm member variable
    return rpm;
}

///////////////////////////////////////////////////////////////
// Diameter Getter Member Function
///////////////////////////////////////////////////////////////

double Robot::getDiameter()
{
    // return the value of the diameter member variable
    return diameter;
}

///////////////////////////////////////////////////////////////
// Get Speed Member Function 
///////////////////////////////////////////////////////////////

double Robot::getSpeed()
{
    // returns the calculated speed of robot
    return (rpm * diameter * 3.14159) / 12;
}

///////////////////////////////////////////////////////////////
// Main Function
///////////////////////////////////////////////////////////////

int main()
{
    double rpm,     // the gear motor speed in RPM
        diameter;   // the wheel diameter in inches

    Robot robot;    // define robot object

    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // prompt the user for the robot's motor speed in RPM
    cout << "Enter the robot's gear motor speed in RPM: ";
    // set rpm equal to the user's input
    cin >> rpm;
    // prompt the user for the robot's wheel diameter
    cout << "Enter the robot's diameter in inches: ";
    // set diametere equal to the user's input
    cin >> diameter;

    // set the robot object's rpm
    robot.setRPM(rpm);

    // set the robot object's diameter
    robot.setDiameter(diameter);

    // display the robot's rpms, wheel diameter, and estimated speed
    cout << "\nRobot Stats" << endl;
    cout << "Gear motor speed: " << robot.getRPM() << " rpm" << endl;
    cout << "Wheel diameter: " << robot.getDiameter() << " inches" << endl;
    cout << "Estimated speed: " << robot.getSpeed() << " feet per minute" << endl;

    return 0;
}