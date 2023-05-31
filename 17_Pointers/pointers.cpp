#include <iostream>

using namespace std;

int main()
{
    //Pointer in CPP
    /*
    Pointer is a DATA Type
    Which holds the address of another variable.

    int a=10;
    int *b=&a;
    
    * --> Dereference Operator
    & --> Address of Operator

    */
    int a=10;
    int *b=&a;
    cout<<"Value of &a: "<<&a<<endl;
    cout<<"Value of b: "<<b<<endl;
    cout<<"Value of *b: "<<*b<<endl;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of &b: "<<&b<<endl;

    return 0;
}