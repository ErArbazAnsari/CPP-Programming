#include <iostream>

using namespace std;

inline int sum(int a, int b = 0)//here b=0 is default argument
{
    return a + b;
}
int main()
{
    int a = 10, b = 20;
    int c = sum(a, 60);
    int d = sum(a, b);
    int e = sum(a);
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    return 0;
}