#include <iostream>

using namespace std;
class demo{
    public:
        virtual void func1(){
            cout<<"Base Class"<<endl;
        }
};
class demo1: public demo{
public:
        void func1(){
            cout<<"Derived Class"<<endl;
        }
};

int main()
{

    demo *obj1;
    demo obj2;
    obj1 = &obj2;
    obj1->func1();
    return 0;
}