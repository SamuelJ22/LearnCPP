#include <iostream>
#include <cstdio>
using namespace std;

int maxof(int a, b, int c, int d)
{
if(a>b&&a>c&&a>d)
{
        cout<<a;
        return(a);
}
else if(b>a&&b>c&&b>d)
{
        cout<<b;
        return(b);
}
else if(c>b&&c>a&&c>d)
{
        cout<<c;
         return(c);
}  
else
{
        cout<<d;
        return(d);
}
}

int main()
{
    int a, b, c, d,max;
    cin>>a>>b>>c>>d;
    max=maxof(a,b,c,d);
}