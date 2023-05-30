#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    cout << "Basic I/O using cpp" << endl;
    int roll_no;
    string full_name;
    cout << "What is your class roll no. : " << endl;
    cin >> roll_no;

    cout << "Enter Your Name : " << endl;
    getline(cin, full_name);

    cout << "Your Name : " << full_name << endl;
    cout << "Your Roll No. : " << roll_no << endl;
    return 0;
}
