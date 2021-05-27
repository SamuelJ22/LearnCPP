#include <iostream>
using namespace std;

int main()
{
    int i, j, total, arr[100], k;
    cout << "Enter size of array " << endl;
    cin >> total;
    cout << "Enter " << total << " number of array elements" << endl;
    for (i = 0; i < total; i++)
    {
        cin >> arr[i];
    }
    cout << "The prime numbers from array are:-";
    for (i = 0; i < total; i++)
    {
        j = 2;
        k = 1;
        while (j < arr[i])
        {
            if (arr[i] % j == 0)
                k = 0;

            j++;
        }
        if (k == 1)
        {
            cout << arr[i] << " , ";
        }
    }

    return 0;
}