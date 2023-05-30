#include <iostream>
using namespace std;

// Implementation of Global Scope
int happy = 10;

int main(int argc, char const *argv[])
{
    system("cls");
    cout << "Implementation of Scope of Variables." << endl;
    /*
    We have two types of variable scope
    1. Local Scope
    2. Global Scope
    */

    //    Implementation of Local Scope
    {
        int arbaz = 10;
        cout << "Values of Arbaz : " << arbaz << endl;
    }
    // cout<<"Value of Arbaz : "<<arbaz<<endl; //Show Error Because arbaz is locally defines in his scope.

    // Calling of global Variables
    cout << "Happy value is : " << happy << endl;
    {
        cout << "Happy value is : " << happy << endl;
        {
            cout << "Happy value is : " << happy << endl;
            {
                cout << "Happy value is : " << happy << endl;
            }
        }
    }
    return 0;
}
