#include <iostream>
using namespace std;

int main()
{
    cout << "Operator Precedence Using CPP" << endl;
    int a = 10, b = 20;
    // Left To Right
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;
    return 0;
}