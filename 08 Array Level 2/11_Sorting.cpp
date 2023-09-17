/*
Sort 0's & 1's in array.

Solved by:
1. Counting
2. 2 pointer approach
3. sort()
*/

// 2. Two pointer approach
#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s < e)
    {
        // When arr[5]==0 then increase only s++
        while (s < e && arr[s] == 0)
        {
            s++;
        }

        // When arr[e]==1 then decrease only e--
        while (s < e && arr[e] == 1)
        {
            e--;
        }

        // When arr[s]==1 and arr[e]==0 then
        // increase and decrease respectively s++, e-- and swap
        if (s < e && arr[s] && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int n = 9;

    sortZeroOne(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
    return 0;
}

/* OUtput:
0 0 0 0 0 0 1 1 1 
*/