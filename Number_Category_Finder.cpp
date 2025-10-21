/*
This program takes a number from a user and checks whether this number is abundant, deficient or perfect.
It does this in a cycle until 0 is entered.
Incorrect inputs are thrown away and the user is asked to enter another number.
Incorrect inputs include anthing that is not a natural number or 0.
*/

#include <iostream>
#include <ios>
#include <limits>
using namespace std;

int main ()
{
    int number;
    int divisor_sum = 1; 
    cout << "Enter a natural number or 0 to exit: ";
    cin >> number;
    
    while (cin.fail() || number < 0 || number != static_cast<int>(number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "You did not enter a natural number!" << endl;
            cout << "Enter a natural number or 0 to exit: ";
            cin >> number;
        }
    
    while (number != 0)
    {
        
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
               divisor_sum = divisor_sum + i; 
            }
        }

        if (divisor_sum > number)
        {
            cout << "Number " << number << " is abundant!" << endl;
        }
        else if (divisor_sum < number)
        {
            cout <<  "Number " << number << " is deficient!" << endl;
        }
        else 
            cout << "Number " << number << " is perfect!" << endl;

        divisor_sum = 1; // after each round the sum has to be reset
        cout << "Enter a natural number or 0 to exit: ";
        cin >> number;

        while (cin.fail() || number < 0 || number != static_cast<int>(number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "You did not enter a natural number!" << endl;
            cout << "Enter a natural number or 0 to exit: ";
            cin >> number;
        }
    }

    cout << "Goodbye!" << endl;
    
    return 0;
}
