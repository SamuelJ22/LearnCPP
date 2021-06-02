#include<iostream>
using namespace std;

int main()
{
    int neumerator, denominator, result;
    cout<<"Enter the Neumionator and Denominator to devide"<<endl;
    cin>>neumerator>>denominator;
    try
    {
        if(denominator==0)
        throw denominator;
         
        result=neumerator/denominator;

    }
    catch(int e)
    {
        cout<<"Exception:- Devide by zero not allowed "<<e<<endl;
    }
     cout<<"The Devison is :- "<<result<<endl;
    return 0;
}