#include <iostream>
#include <string>
using namespace std;

// Passing Arrays to Functions and sizeof Operator

int main()
{
    int guesses[10] = {12, 43, 23, 43, 23};

    int num_elements = 5;
    int size = sizeof(guesses) / sizeof(int);

    cout << size << endl;

    for(int i = 0; i < num_elements; i++)
    {
        cout << guesses[i] << "\t";
    }
    
    return 0;
}

// Struct Basics
/* struct User
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
} */