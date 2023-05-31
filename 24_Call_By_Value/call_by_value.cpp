#include <iostream>

using namespace std;
void swap(int, int);
int main()
{
    int a,b;
    cout<<"Enter Value of a: ";
    cin>>a;
    cout<<"Enter Value of b: ";
    cin>>b;
    cout<<"Value of a and b : ";
    swap(a,b);
    return 0;
}

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Value of x and y "<<x<<" "<<y<<endl;
}