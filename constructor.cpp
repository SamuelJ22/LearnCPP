#include <iostream>
using namespace std;
 
class Constructor
{
private:
    int a, b;
 
public:
    
    Constructor(int x, int y)
    {
        a = x;
        b = y;
    }
 
    int getX()
    {
        return a;
    }
    int getY()
    {
        return b;
    }
};
 
int main()
{
    // Constructor called
    Constructor obj(30, 15);
 
    // Access values assigned by constructor
    cout << "obj.x = " << obj.getX() << ", obj.y = " << obj.getY();
 
    return 0;
}