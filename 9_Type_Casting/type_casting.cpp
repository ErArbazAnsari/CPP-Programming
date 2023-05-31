#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float y = 143.565;
    char z = 'A';
    cout << "Value of X: " << x << endl;
    cout << "Value of X TypeCasted in Float: " << (float(x)) << endl;

    cout << "Value of Y: " << y << endl;
    cout << "Value of Y TypeCasted in Float: " << (int(y)) << endl;

    cout << "Value of Z: " << z << endl;
    cout << "Value of Z TypeCasted in Int: " << (int(z)) << endl;

    return 0;
}