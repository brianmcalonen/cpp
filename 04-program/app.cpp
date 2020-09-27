//******************************************************************
// Assignment 4 - Robot Speed Estimator
// Programmer: Brian McAlonen
// Completed : 9/23/2020
// Status    : Complete
//
// Design a class called Robot that will calculate
// the estimated speed of a robot using it's gear
// motor speed and wheel diameter.
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
    // initialize default value for gear motor speed
    rpm = 74;
    // initialize default value for wheel diameter
    diameter = 1;
}

// RPM setter member function
void Robot::setRPM(double newRPM)
{
    if(newRPM == 74 || newRPM == 190 || newRPM == 265)
    {
        rpm = newRPM;
    }
}

// Diameter setter member function
void Robot::setDiameter(double newDiameter)
{
    // if new diameter is 1 to 6 inches inclusive
    if(newDiameter >= 1 && newDiameter <=6)
    {
        diameter = newDiameter;
    }
}

// RPM getter member function
double Robot::getRPM()
{
    return rpm;
}

// Diameter getter member function
double Robot::getDiameter()
{
    return diameter;
}

// returns estimated speed of robot
double Robot::getSpeed()
{
    return (rpm * diameter * 3.14159) / 12;
}

// main function
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

    robot.setRPM(rpm);

    robot.setDiameter(diameter);

    cout << "Robot Stats:" << endl;
    cout << "Gear motor speed RPM: " << robot.getRPM() << endl;
    cout << "Wheel diameter: " << robot.getDiameter() << endl;
    cout << "Estimated speed: " << robot.getSpeed() << endl;

    return 0;
}