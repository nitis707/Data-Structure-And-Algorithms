#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    // there is some flaw in below line
    int mid = (start + end) / 2;

    while (start <= end)
    {
        // Found
        if (arr[mid] == target)
        {
            // return index of the found element
            return mid;
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
        // mid update
        mid = (start + end) / 2;
    }

    // if element not found
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int target;

    cout<<"Enter target element: ";
    cin>>target;

    int ansIndex = binarySearch(arr, n, target);

    if (ansIndex == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Element found at Index: " << ansIndex << endl;
    }

    return 0;
}

/* Output:
Enter target element: 80
Element found at Index: 7
*/