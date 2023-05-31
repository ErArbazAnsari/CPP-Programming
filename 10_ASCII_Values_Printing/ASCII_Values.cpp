#include <iostream>
using namespace std;

int main()
{
    system("cls");
    cout << "Small Alphabets" << endl;
    for (int i = 97; i < 123; i++)
    {
        cout << (char(i)) << " ";
    }

    cout << "\n\nCapital Alphabets" << endl;
    for (int i = 65; i < 91; i++)
    {
        cout << (char(i)) << " ";
    }

    cout << "\n\nNumbers" << endl;
    for (int i = 48; i < 58; i++)
    {
        cout << (char(i)) << " ";
    }

    cout << "\n\n"
         << endl;
    for (int i = 40; i < 47; i++)
    {
        cout << (char(i)) << " ";
    }

    cout << "\n\n"
         << endl;
    for (int i = 58; i < 65; i++)
    {
        cout << (char(i)) << " ";
    }

    cout << "\n\nComplete ASCII Values" << endl;
    for (int i = 1; i < 255; i++)
    {
        cout << (char(i)) << " ";
    }

    return 0;
}