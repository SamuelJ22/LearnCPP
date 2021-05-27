#include <iostream>
using namespace std;

int a = 5;
float b = 5.5;
bool c = true;
char d = 'e' ;
double f=5.51;--
int arr[4] = {1, 2, 3, 4};
int main()
{
    cout << "Size of array is=" << sizeof(arr[4])<<" bytes" << endl;
    cout << "Size of integer is=" << sizeof(a)<<" bytes" << endl;
    cout << "Size of float is=" << sizeof(b)<<" bytes" << endl;
    cout << "Size of boolean is=" << sizeof(c)<<" bytes" << endl;
    cout << "Size of charecter is=" << sizeof(d)<<" bytes" << endl;
    cout << "Size of Double is=" << sizeof(f)<<" bytes" << endl;

    return 0;
}
