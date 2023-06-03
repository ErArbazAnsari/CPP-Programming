#include <iostream>

using namespace std;
class Employee
{
private:
    int salary;
    int bonus;

public:
    int emp_id;
    string name;
    string post;
    void setdata(int s1, int b1);
    void getdata()
    {
        cout << "Emp. salary: " << salary << endl;
        cout << "Emp. bonus: " << bonus << endl;
        cout << "Emp. emp_id: " << emp_id << endl;
        cout << "Emp. name: " << name << endl;
        cout << "Emp. post: " << post << endl;
    }
};
void Employee::setdata(int s1, int b1)
{
    salary = s1;
    bonus = b1;
}

int main()
{
    Employee Arbaz;
    Arbaz.emp_id = 24018;
    Arbaz.name = "Arbaz Ansari";
    Arbaz.post = "Manager";
    Arbaz.setdata(20000, 50000);
    Arbaz.getdata();
    return 0;
}