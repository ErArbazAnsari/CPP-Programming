#include <iostream>

using namespace std;
class complex{
    int x;
    int y;
    public:
        friend complex complex_sum(complex o1, complex o2);
        void getdata(int a, int b){
            x=a;
            y=b;
        }
        void display(void){
            cout<<"Your number is: "<<x<<" + "<<y<<"i"<<endl;
        }
};

complex complex_sum(complex o1, complex o2){
    complex o3;
    o3.getdata((o1.x+o2.x),(o1.y+o2.y));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.getdata(1,4);
    c1.display();

    c2.getdata(3,6);
    c2.display();

    sum=complex_sum(c1, c2);
    sum.display();
    return 0;
}