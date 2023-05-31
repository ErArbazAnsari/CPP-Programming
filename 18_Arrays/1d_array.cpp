#include <iostream>

using namespace std;

int main()
{
    // First Way to Create 1D Array
    int mathmarks[] = {2, 3, 4, 5, 6};
    cout << "math marks " << mathmarks[0] << endl;
    cout << "math marks " << mathmarks[1] << endl;
    cout << "math marks " << mathmarks[2] << endl;
    cout << "math marks " << mathmarks[3] << endl;
    cout << "math marks " << mathmarks[4] << endl;

    // Second Way to Implementation of 1D Array
    int sciencemarks[4];
    sciencemarks[0] = 10;
    sciencemarks[1] = 130;
    sciencemarks[2] = 30;
    sciencemarks[3] = 60;
    cout << "Science Marks of term 0: " << sciencemarks[0] << endl;
    cout << "Science Marks of term 1: " << sciencemarks[1] << endl;
    cout << "Science Marks of term 2: " << sciencemarks[2] << endl;
    cout << "Science Marks of term 3: " << sciencemarks[3] << endl;

    // Third Way to implementation of 1D Array
    int hindimarks[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> hindimarks[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Hindi Marks of Term " << i << " Value is: " << hindimarks[i] << endl;
    }

    return 0;
}