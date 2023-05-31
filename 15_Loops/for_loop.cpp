#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\tFor Loop Using CPP" << endl;

    // Write Any Table
    long int table;
    cout << "\tEnter Number: ";
    cin >> table;

    for (int i = 1; i < 11; i++)
    {
        cout << "\t" << table << " * " << i << " = " << table * i << endl;
    }

    // Infinity Loop Using For Loop
    for (int i = 1;; i++)
    {
        cout << "\t" << table << " * " << i << " = " << table * i << endl;
    }

    return 0;
}
