/*
Program for sorting all the negative numbers at left side.
I/P - 23 -7 12 -10 -11 40 60
*/

#include <iostream>
using namespace std;

void shiftNegOneSide(int arr[], int n)
{
    int j = 0; // Memory block, jaha par negative number store karna hai

    for (int index = 0; index < n; index++)
    {
        // index - entire array ko traverse karne ke liye.
        if (arr[index] < 0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[] = {23, -7, 12, -10, -11, 40, 60};
    int n = 7;

    shiftNegOneSide(arr, n);

    cout << "Printing the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/* Output:
Printing the array: 
-7 -10 -11 23 12 40 60 
*/