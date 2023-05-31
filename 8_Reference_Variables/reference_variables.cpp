#include <iostream>
using namespace std;

// Global Variables
int a = 10;
int main(int argc, char const *argv[])
{
    cout << "Reference Varialbes Using CPP" << endl;
    int a = 120;
    cout << "Local value of a is : " << a << endl;

    // Literals
    float ab = 10.5;
    float b = 10.3f;
    float c = 10.3F;
    long double d = 103.l;
    long double e = 13.L;
    cout << "Size is : " << sizeof(ab) << endl;
    cout << "Size is : " << sizeof(b) << b << endl;
    cout << "Size is : " << sizeof(c) << c << endl;
    cout << "Size is : " << sizeof(d) << d << endl;
    cout << "Size is : " << sizeof(e) << endl;

    // Reference Variables
    float var1 = 454;
    cout << var1 << endl;
    float &var2 = var1;
    cout << var2 << endl;

    return 0;
}
