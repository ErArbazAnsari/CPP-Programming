#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\\While Loop Using CPP" << endl;

    // Write Any Table
    long int table;
    cout << "\tEnter Number: ";
    cin >> table;
    int i = 1;
    while (i <= 10)
    {
        cout << "\t" << table << " * " << i << " = " << table * i << endl;
        i++;
    }

    // Infinity Loop Using For Loop
    while (true)
    {
        cout << "\t" << table << " * " << i << " = " << table * i << endl;
        i++;
    }

    return 0;
}
