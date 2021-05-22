#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int a, num1, num2,result;
int rand_range()
{
    num1 = rand() % 100 + 1;
    num2 = rand() % 100 + 1;
    return num1, num2;
}
int main()
{

    cout << "Hi!, This quize will check your basic calculation" << endl;
    cout<<"Enter the number of questions you want to attempt"<<endl;
    cin>>a;

    // cout << "Enter operator: +, -, *, /: ";
    //cin >> op;

    // cout << "Enter two operands: ";
    // cin >> num1 >> num2;

    srand(time(NULL));

    //cin.get();
  for(int i=1;i<=a;i++)
  {
    switch (rand() % 4 + 1)
    {
    case 1:
        rand_range();
        cout<<"Enter the addition of :- "<< num1 << " + " << num2<<endl;
        cin>>result;
        if(num1+num2==result)
        cout<<"The annwer is Correct"<<endl;
        else
        cout<<"The annwer is Wrong"<<endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2<<endl;
        break;

    case 2:
        rand_range();
        cout<<"Enter the subtraction of :- "<< num1 << " - " << num2<<endl;
        cin>>result;
        if(num1-num2==result)
        cout<<"The annwer is correct"<<endl;
        else
        cout<<"The annwer is Wrong"<<endl;

        cout << num1 << " - " << num2 << " = " << num1 - num2<<endl;
        break;

    case 3:
        rand_range();
        cout<<"Enter the multiplication of :- "<< num1 << " * " << num2<<endl;
        cin>>result;
        if(num1*num2==result)
        cout<<"The annwer is correct"<<endl;
        else
        cout<<"The annwer is Wrong"<<endl;
        cout << num1 << " * " << num2 << " = " << num1 * num2<<endl;
        break;

    case 4:
        rand_range();
        cout<<"Enter the devision of :- "<< num1 << " / " << num2<<endl;
        cin>>result;
        if(num1/num2==result)
        cout<<"The annwer is correct"<<endl;
        else
        cout<<"The annwer is Wrong"<<endl;
        cout << num1 << " / " << num2 << " = " << num1 / num2<<endl;
        break;

    //default:
       
       // cout << "Error! operator is not correct";
       // break;
    }
  }
    return 0;
}
