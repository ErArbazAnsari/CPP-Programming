#include <iostream>

using namespace std;

int fibo(long int num)
{
    if (num < 2)
    {
        return 1;
    }
    return (fibo(num-2)+fibo(num-1));
}
int main()
{
    long int number;
    cout << "Enter No. " << endl;
    cin >>  number;
    if (number == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "Fibonnaci of " << number << " is : " << fibo(number) << endl;
    }

    return 0;
}