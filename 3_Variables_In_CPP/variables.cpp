#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
     cout << "Implementation of Variables in CPP" << endl;
     cout << "Variables is a container used to store data/values" << endl;

     // Variables
     // 1. int
     // 2. float
     // 3. char
     // 4. double
     // 5. boolean

     // Implementation of 'int' data type
     int a;
     a = 24018;
     cout << "Integer = " << a << endl;
     cout << "Size of Interger Variables : " << sizeof(a) << endl
          << endl;
     
     // Implementation of 'float' data type
     float b = 24018.444;
     cout << "Float = " << b << endl;
     cout << "Size of Float Variables : " << sizeof(b) << endl
          << endl;

     // Implementation of 'char' data type
     char c;
     c = 'A';
     cout << "Char = " << c << endl;
     cout << "Size of Char Variables : " << sizeof(c) << endl
          << endl;

     // Implementation of 'Double' data type
     double d;
     d = 244.865426823;
     cout << "Double = " << d << endl;
     cout << "Size of Double Variables : " << sizeof(d) << endl
          << endl;

     long double ld;
     ld = 244.865426823;
     cout << "Long Double = " << ld << endl;
     cout << "Size of LongDouble Variables : " << sizeof(ld) << endl
          << endl;

     // Implementation of 'Boolean' data type
     bool e;
     e = true;
     cout << "Boolean = " << e << endl;
     cout << "Size of Boolean Variables : " << sizeof(e) << endl
          << endl;

     return 0;
}
