/*
Sort 0's & 1's in array.

Solved by:
1. Counting
2. 2 pointer approach
3. sort()
*/

// 1. Counting

void sortZeroOne(int arr[], int num)
{
    int zeroCount = 0;
    int oneCount = 0;

    // Step A: Count 0 and 1
    for (int i = 0; i < num; i++)
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

    // Step B: place all zeros first
    
    // Difficult Way
    // int i;
    // for (i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int j = 0; j < i; j++)
    // {
    //     arr[j] = 1;
    // }

    // Easy Way
    int index = 0;
    while(zeroCount--)
    {
        arr[index] =0;
        index++;
    }

    while(oneCount--)
    {
        arr[index] = 1;
        index++;
    }
}

#include <iostream>
using namespace std;

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
}

/* Output:
1 1 1 1 1 1 0 0 0
*/