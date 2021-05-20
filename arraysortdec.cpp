#include <iostream>
#include <algorithm>
using namespace std;

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
}

int main()
{
    // int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int a[100], asize;

    //int asize = sizeof(a) / sizeof(a[0]);
    cout << "Enter the size of array" << endl;
    cin >> asize;
    cout << "enter the " << asize << " number of array elements" << endl;
    for (int i = 0; i < asize; ++i)
    {
        cin>>a[i];
    }

    // sort the array
   // cout<<"a+asize is"<<(a+asize)<<endl;
    sort(a, a + asize, greater<int>());

    cout << "\nThe array after sorting is :\n";

    show(a, asize);

    return 0;
}