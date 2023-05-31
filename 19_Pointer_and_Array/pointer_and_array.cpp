#include <iostream>

using namespace std;

int main()
{
    int mathmarks[] = {20, 30, 4, 50, 6};
    int *pointer = mathmarks;
    cout << "Value of *pointer " << *pointer << endl;
    cout << "Value of *(pointer+1) " << *(pointer + 1) << endl;
    cout << "Value of *(pointer+2) " << *(pointer + 2) << endl;
    cout << "Value of *(pointer+3) " << *(pointer + 3) << endl;
    cout << "Value of *(pointer+4) " << *(pointer + 4) << endl;
    return 0;
}