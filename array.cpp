#include <iostream>
using namespace std;

int main()
{
    //int arr[10]={2,24,36,83,1,21,3,12,4,11};

    int total;
    int arr[100];
    int max;
    cout << "Enter the total number of array elements" << endl;
    cin >> total;
    cout << "Enter the " << total << " number of array  elements " << endl;
    for (int i = 0; i < total; i++)
         cin >> arr[i];
     max = arr[0];   
    for (int i = 1; i < total; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "greatest number is=" << max << endl;
    return 0;
}