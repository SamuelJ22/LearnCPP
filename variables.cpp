#include <iostream>
#include <cstdio>
using namespace std;

void var(int c, long b, char e, float f, double d)
{
    cout << "int" << c << endl;
    cout << "long" << b << endl;
    cout << "char" << e << endl;
    cout << "float" << f << endl;
    cout << "double" << d << endl;
}

int main()
{

    int c;
    long b;
    char e;
    float f;
    double d;
    cout<<"entere the int,long, char, float, double seperated by space "<<endl;
    cin >>c >> b >> e >> f >> d;

    var(c, b, e, f, d);

    return 0;
}
