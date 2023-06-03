#include <iostream>

using namespace std;

int sum(int x, int y, int z)
{
    return x + y + z;
}
int sum(int x, int y, int z, int a)
{
    return x + y + z + a;
}
int sum(int x, int y, int z, int a, int b)
{
    return x + y + z + a + b;
}
int main()
{
    cout << "Sum of 1+1+2 = " << sum(1, 1, 2) << endl;
    cout << "Sum of 1,1,2,8 = " << sum(1, 1, 2, 8) << endl;
    cout << "Sum of 5,3,5,1,2 = " << sum(5, 3, 5, 1, 2) << endl;
    return 0;
}