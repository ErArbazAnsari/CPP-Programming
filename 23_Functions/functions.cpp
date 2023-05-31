#include <iostream>

using namespace std;
// int sum(int x, int y){
//     return x+y;
// }
int sum(int, int);
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Sum of a and b is: " << sum(a, b);
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}