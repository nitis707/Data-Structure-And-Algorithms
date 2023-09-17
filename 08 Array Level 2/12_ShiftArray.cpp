/*
Right Shift array by 1.

Let:
I/P = 10, 20, 30, 40, 50, 60
O/P = 60, 10, 20, 30, 40, 50
*/

#include <iostream>
using namespace std;

void shiftArray(int arr[], int n)
{
    // Step 1
    int temp = arr[n - 1];

    // Step 2
    // Shift => arr[i] = arr[i-1]
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Step 3
    arr[0] = temp;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    shiftArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/* Output:
60 10 20 30 40 50
*/