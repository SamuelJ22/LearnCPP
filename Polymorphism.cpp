#include <iostream>
  
using namespace std;
class Polly
{
    public:
      
    // function with one int parameter
    void Func(int a)
    {
        cout << "value of x is " << a << endl;
    }
      
    // function with same name but one double parameter
    void Func(double a)
    {
        cout << "value of x is " << a << endl;
    }
      
    // function with same name and 2 int parameters
    void Func(int a, int b)
    {
        cout << "value of a and b is " << a << ", " << b << endl;
    }
};
  
int main() {
      
    Polly obj1;
      
    // Which function is called will depend on the parameters passed with help of func overloading
    // The first 'func' is called 
    obj1.func(3);
      
    // The second 'func' is called
    obj1.func(7.142);
      
    // The third 'func' is called
    obj1.func(89,67);
    return 0;
} 