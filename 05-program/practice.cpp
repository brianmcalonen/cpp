#include <iostream>
#include <string>
using namespace std;

struct User
{
    string first_name;
    string last_name;
    string get_status()
    {
        return status;
    }

    private:
        string status = "Gold";

}; 

int main()
{
    User me;
    me.first_name = "Brian";
    me.last_name = "McAlonen";

    cout << "Hi my name is " << me.first_name 
    << " " << me.last_name << "." << endl;
    cout << "I have " << me.get_status() << " status!" << endl;

    return 0;
}