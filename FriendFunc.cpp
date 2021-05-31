#include <iostream>  
using namespace std;  
class Base;         
class Derived  
{  
    int x;  
    public:  
    void set(int i)  
    {  
        x=i;  
    }  
    friend void min(Derived,Base);         // my friend function.  
};  
class Base  
{  
    int y;  
    public:  
    void set(int i)  
    {  
        y=i;  
    }  
    friend void min(Derived,Base);                    // my friend function  
};  
void min(Derived a,Base b)  
{  
    if(a.x<=b.y)  
    std::cout << a.x << std::endl;  
    else  
    std::cout << b.y << std::endl;  
}  
 
   int main()  
{  
   Derived a;  
   Base b;  
   a.set(10);  
   b.set(20);  
   min(a,b);  
    return 0;  
 }  