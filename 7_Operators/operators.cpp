#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Arithmetic Operators in CPP" << endl;
    cout << "Followings are the operators in cpp" << endl;
    // 1. Arithmetic Operator
    int x = 10, y = 20;
    cout << "x+y " << x + y << endl;
    cout << "x-y " << x - y << endl;
    cout << "x*y " << x * y << endl;
    cout << "x/y " << x / y << endl;
    cout << "x%y " << x % y << endl;
    cout << "x++ " << x++ << endl;
    cout << "++x " << x++ << endl;
    cout << "--x " << --x << endl;
    cout << "x-- " << --x << endl;
    // 2. Assignment Operator
    int a = 10;

    // 3. Comparison Operator
    cout << "The Value of X!=Y is " << (x != y) << endl;
    cout << "The Value of X==Y is " << (x == y) << endl;
    cout << "The Value of X>Y is " << (x > y) << endl;
    cout << "The Value of X<Y is " << (x < y) << endl;
    cout << "The Value of X<=Y is " << (x <= y) << endl;
    cout << "The Value of X>=Y is " << (x >= y) << endl;

    // 4. Logical Operator
    //  &&   -->Logical Operator
    //  ||   -->Or Operator
    //  !    -->Not Operator

    return 0;
}
