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
    int mid = (start + end) / 2;

    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
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