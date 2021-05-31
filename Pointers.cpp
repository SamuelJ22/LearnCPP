#include <iostream>

using namespace std;

int main () {
   int  var = 20;   
   int  *ptr; 

   ptr = &var;       // stores address of var in pointer variable ptr

   cout << "Value of var variable: "<< var << endl;
   

   // to print the address stored in ip pointer variable
   cout << "Address stored in ptr variable: ";
   cout << ptr << endl;

   // access the value at the address available in pointer
   cout << "Value of *ptr variable: ";
   cout << *ptr << endl;

   return 0;
}