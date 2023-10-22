/*
Find first occurence of a number in a sorted array
I/P - 10 20 30 30 30 30 40 50
Target - 30
O/P - 2
*/

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    // In this case Integer can be overflow
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; // Then use this.

    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // go to left
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            // go right
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            // go left
            end = mid - 1;
        }
        // galti yaha hoti hai hamnesha
        // update mid
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 30, 30, 40, 50};
    int n = 8;

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int ansIndex = firstOccurence(arr, n, target);

    if (ansIndex == -1)
    {
        cout << "Target not Found." << endl;
    }
    else
    {
        cout << "Target found at index: " << ansIndex << endl;
    }
    return 0;
}

/* Output:
Enter target element: 40
Target found at index: 3
*/