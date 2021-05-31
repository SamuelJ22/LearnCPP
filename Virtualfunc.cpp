#include <iostream>
using namespace std;
 
class Base {
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }
 
    void display()
    {
        cout << "This is base class" << endl;
    }
};
 
class Derived : public Base {
public:
    void print()
    {
        cout << "print derived class" << endl;
    }
 
    void display()
    {
        cout << "This is derived class" << endl;
    }
};
 
int main()
{
    Base* baseptr;
    Derived d;
    baseptr = &d;
 
    // virtual function binded at runtime!!
    baseptr->print();
 
    // Non-virtual function binded at compile time!!
    baseptr->display();
}