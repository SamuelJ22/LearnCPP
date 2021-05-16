#include<iostream>
using namespace std;

int main()
{
  int arr[10]={2,24,36,83,1,21,3,12,4,11};
  int min=arr[0];
  for(int i=0; i<10; i++)
  {
      if(min>arr[i])
      min=arr[i];
      
  }
  cout<<"smallest number is="<<min<<endl;
  return 0;
}