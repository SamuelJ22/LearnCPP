#include <iostream>
using namespace std;
 
int main()
{
   int a = -1;
 
   
   cout << "Before try \n";
   try {
      cout << "Inside try \n";
      if (a < 0)
      {
         throw a;
         cout << "After throw (Never executed) \n";
      }
   }
   catch (int a ) {
      cout << "Exception Caught \n";
   }
 
   cout << "After catch (Will be executed) \n";
   return 0;
}