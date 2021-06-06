#include<iostream>
using namespace std;
int main()
{
int a=7;

int * ptr=&a;

cout<<"address of a"<<ptr;
cout<<"Value of a"<<*ptr;
return 0;

}