#include <iostream>
#include <string>
using namespace std;

struct User
{
    string first_name;
    string last_name;
    string status;

}; 

int main()
{
    User me;
    me.first_name = "Brian";
    me.last_name = "McAlonen";
    me.status = "Platinum";

    cout << "Hi my name is " << me.first_name 
    << " " << me.last_name << "." << endl;
    cout << "I have " << me.status << " status!" << endl;
    
    return 0;
}