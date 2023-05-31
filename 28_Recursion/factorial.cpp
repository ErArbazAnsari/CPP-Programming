#include <iostream>

using namespace std;

int factorial(long int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return (num * factorial(num - 1));
}
int main()
{
    long int fact;
    cout << "Enter No. " << endl;
    cin >> fact;
    if (fact == 0)
    {
        cout << "Facotrial is 1" << endl;
    }
    else
    {
        cout << "Factorial of " << fact << " is : " << factorial(fact) << endl;
    }

    return 0;
}