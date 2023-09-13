// Count 0's & 1's is an Array

#include <iostream>
using namespace std;

void countZeroOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "ZeroCount: " << zeroCount << endl;
    cout << "OneCount: " << oneCount << endl;
}

int main()
{
    // int arr[] = {0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1};
    int arr[100];
    int size;
    // Enter size fo array
    cout << "Enter size: ";
    cin >> size;

    // Taking input in array
    cout << "Enter element: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    countZeroOne(arr, size);
    return 0;
}

/* Output:
Enter size: 8
Enter element: 0 1 0 1 0 1 0 1
ZeroCount: 4
OneCount: 4
*/