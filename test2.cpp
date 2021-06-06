#include<iostream>
using namespace std;

class Entity
{
    float x,y;
    public:
    virtual void print()/
    {
        cout <<"sfasd"<<endl;

    }
};
int main()
{
    
    Entity e,*p;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(p)<<endl;
   // cin.get();
    return 0;
}