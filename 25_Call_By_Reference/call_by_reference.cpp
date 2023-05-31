#include <iostream>

using namespace std;
void swap(int, int);
int main()
{
    int a, b;
    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b;
    swap(&a, &b);
    cout<<"value of a: "<<a<<endl;
    cout<<"value of b: "<<b<<endl;

    return 0;
}

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}