/*
Find total occurence of a number in a sorted array
I/P - 10 20 30 30 30 30 40 50
Target - 30
O/P - 4
*/

#include <iostream>
using namespace std;

int lastOccurence(int arr[], int n, int target)
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
            // go to right
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            // go right
            start = mid + 1;
        }
        else if (target < arr[mid])
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

int totalOccurence(int arr[], int n, int target)
{
    int firstOcc = firstOccurence(arr, n, target);
    int lastOcc = lastOccurence(arr, n, target);
    int total = lastOcc - firstOcc + 1;
    return total;
}

int main()
{
    int arr[] = {10, 20, 30, 30, 30, 30, 40, 50, 50};
    int n = 9;

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int ans = totalOccurence(arr, n, target);
    cout << "Total Occ is: " << ans << endl;

    return 0;
}

/* Output:
Enter target element: 30
Total Occ is: 4
*/