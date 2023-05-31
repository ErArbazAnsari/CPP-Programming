#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    system("cls");
    cout<<"Manipulators in CPP"<<endl;
    int a=100, b=1000, c=10000;
    cout<<"Value of without setw() a: "<<a<<endl;
    cout<<"Value of without setw() b: "<<b<<endl;
    cout<<"Value of without setw() c: "<<c<<endl;

    //Setw() is used for right justified
    cout<<"Value of with setw() a: "<<setw(5)<<a<<endl;
    cout<<"Value of with setw() b: "<<setw(5)<<b<<endl;
    cout<<"Value of with setw() c: "<<setw(5)<<c<<endl;
    return 0;
}