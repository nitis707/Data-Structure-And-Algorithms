/* 852. Peak Index in a Mountain Array
An array arr is a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.

Example 1:
Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
Example 3:

Input: arr = [0,10,5,2]
Output: 1

Constraints:
3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.
*/

/*
Peak element in a Mountain Array in a sorted array.

I/P - 10, 20, 30, 40, 50, 70, 60, 50, 40
*/

#include <iostream>
#include <vector>
using namespace std;

int peakInMountainArray(vector<int> &v)
{
    int n = v.size() - 1;
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (v[mid] < v[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    vector<int> v{10, 20, 30, 40, 50, 80, 100, 70, 60, 50};

    int peak = peakInMountainArray(v);
    cout << "Peak element is: " << peak << endl;

    return 0;
}

/* Output:
Peak element is: 6
*/