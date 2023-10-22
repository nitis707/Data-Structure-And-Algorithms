/*
Program to find missing number in a sorted array.
Let the range be 1--N, Given input element in array is N-1.

I/P - 1 2 3 4  6 7 8 9
O/P - Missing element is : 5
*/

#include <iostream>
using namespace std;

int findMissingNum(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            // go to right
            start = mid + 1;
        }
        else
        {
            // ans store
            ans = mid;
            // got to left
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    if (ans + 1 == 0)
    {
        return n + 1;
    }
    return ans + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    int n = 8;

    int ans = findMissingNum(arr, n);
    cout << "Missing element is: " << ans << endl;

    return 0;
}

/* Output:
Missing element is: 5
*/