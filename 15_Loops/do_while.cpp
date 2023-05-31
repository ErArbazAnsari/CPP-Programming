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
    do
    {
        cout << "\t" << table << " * " << i << " = " << table * i << endl;
        i++;
    } while (i <= 10);

    // Infinity Loop Using For Loop
    do
    {
        cout << "\t" << table << " * " << i << " = " << table * i << endl;
        i++;
    } while (true);

    return 0;
}
