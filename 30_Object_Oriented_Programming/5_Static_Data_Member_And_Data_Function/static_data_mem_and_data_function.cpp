#include <iostream>

using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void getdata()
    {
        cout << "Enter Employee I'd: ";
        cin >> id;
        count++;
    }
    void display(void)
    {
        cout << "Here is the employee id " << id << " \nEmployee No. is: " << count << endl;
    }
    static void display_count(void)
    {   // with the help of static function we have the access of static functions and static member only
        // cout<<id; if we have to access the class member we cannot acces. it will throw an error.
        cout << "Value of Count is " << count << endl;
    }
};
int Employee::count;
int main()
{
    Employee Arbaz, Rajan, Pawan;
    Arbaz.getdata();
    Arbaz.display();
    Employee::display_count();

    Rajan.getdata();
    Rajan.display();
    Employee::display_count();

    Pawan.getdata();
    Pawan.display();
    Employee::display_count();

    return 0;
}