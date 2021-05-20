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
    // int a[] = { 3, 7, 2, 9, 6, 1, 4, 8, 5, 0 };
    int a[100], asize, search;

    //int asize = sizeof(a) / sizeof(a[0]);
    cout << "Enter the size of array" << endl;
    cin >> asize;
    cout << "enter the" << asize << "number of array elements" << endl;
    for (int i = 0; i < asize; ++i)
    {
        cin >> a[i];
    }

    // sort the array first
    
    sort(a, a + asize);

    cout << "The array after sorting is :"<<endl;

    show(a, asize);

    cout<<"\n\nEnter the element you want to search"<<endl;
     cin>>search;

    if (binary_search(a,a+asize,search))
    cout<<"the element was found in the given array"<<endl;
    else
       cout<<"The element was not found min the array"<<endl;
    

    return 0;
}