#include <iostream>

using namespace std;

int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, sum;
    cout << "Enter the two numbers you want to add" << endl;
    cin >> num1 >> num2;
    sum = Sum(num1, num2);
    cout << "The addition is:- " << endl;
    cout << sum;
    return 0;
}
