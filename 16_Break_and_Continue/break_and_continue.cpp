#include <iostream>

using namespace std;

int main()
{
    //Implementation of break in loop
    for (int i = 1; i < 11; i++)
    {
        cout<<i<<endl;
        if (i==2)
        {
            break;
        }  
    }
    
    //Implementaion of continue in loop
    cout<<"\n\nContinue Implementation"<<endl;
    for (int i = 1; i < 11; i++)
    {
        if (i==2)
        {
            continue;
        }  
        cout<<i<<endl;
    }
    return 0;
}