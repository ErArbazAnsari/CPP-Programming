#include <iostream>
using namespace std;

int main()
{
    cout << "Control Structures" << endl;
    // We have three types of Control Structures in CPP
    // 1. Sequence Structures
    // 2. Selection Structures
    // 3. Loop structures

    // Implementation of if-else, elseif statements
    // Selection Control Stuctures
    int age;
    cout << "Hi, Please Enter Your Age: ";
    cin >> age;
    if (age < 18)
    {
        cout << "\nSorry, Bro you are not able to come to party.";
    }
    else if (age == 18)
    {
        cout << "\nStill, You are not eligible to come to party.";
    }
    else
    {
        cout << "\nYes, you are eligible." << endl;
    }

    // Selection Control Stuctures : Switch Statements
    int days;
    cout << "\n\nEnter Day No. : ";
    cin >> days;

    switch (days)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Wrong, Day No. Input" << endl;
        break;
    }
    return 0;
}