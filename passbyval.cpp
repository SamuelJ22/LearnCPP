#include<iostream>
using namespace std;

void passbyval(int x, int y)
{
    int z=x;
    x=y;
    y=z;
    cout<<"after swap"<<x<<":-b  "<<y<<":- b"<<endl;
}

int main()
{
    int a=5, b=6;
    cout<<"before swap"<<a<<":-a  "<<b<<":- b"<<endl;
    passbyval(a,b);
    
    return 0;
}