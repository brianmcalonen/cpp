#include <iostream>
#include <string>
using namespace std;

// Range-Based for Loop
int main()
{
    string ice_cream[] = {"vanilla", "chocolate", "strawberry", "mint chip", "americone dream"};

    for(string name : ice_cream)
    {
        cout << name << endl;
    }
} 

// Fill Array from Input
/* void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
}

int main()
{
    const int SIZE = 10;
    int guesses[SIZE];
    int count = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if (cin >> guesses[i])
        {
            count++;
        }
        else
        {
            break;
        }
        
    }

    print_array(guesses, count);
    cin.clear();
    cin.ignore(10000, '\n');

    return 0;
} */

// Passing Arrays to Functions and sizeof Operator

/* void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
}

int main()
{
    int guesses[] = {12, 43, 23, 43, 23};
    int size = sizeof(guesses) / sizeof(int);

    // only use brackets when defining array or accessing elements
    print_array(guesses, size);

    return 0;
} */

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