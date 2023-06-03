#include <iostream>

using namespace std;
class Employee
{
    int salary;
    string emp_id;
    static int emp_count;

public:
    void getdata(void)
    {
        cout << "Enter Emp. I'd: ";
        cin >> emp_id;
        cout << "\nEnter Emp. Salary: ";
        cin >> salary;
        emp_count++;
    }
    void display(void)
    {
        cout << "Emp I'D: " << emp_id << endl;
        cout << "Emp Salary: " << salary << endl;
        cout << "Emp Count: " << emp_count << endl;
    }
};
int Employee::emp_count;
int main()
{
    int total_Emp;
    cout << "Enter Total No. of Employees in your company: ";
    cin >> total_Emp;
    Employee KT_Computer_Services[total_Emp];
    for (int i = 0; i < total_Emp; i++)
    {
        KT_Computer_Services[i].getdata();
        KT_Computer_Services[i].display();
    }

    return 0;
}