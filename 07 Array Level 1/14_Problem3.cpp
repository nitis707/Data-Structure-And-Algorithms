// Maximum number in an array.

#include <iostream>
#include <limits.h>
using namespace std;

int findMaximumInArray(int arr[], int size)
{
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < maxAns)
        {
            maxAns = arr[i];
        }
    }
    return maxAns;
}

int main()
{
    int arr[] = {10, 8, 31, 4, 3, 1, 51};
    int size = 7;

    int maximum = findMaximumInArray(arr, size);
    cout << "Maximum number is: " << maximum << endl;
    return 0;
}

/*Output:
Minimum number is: 51
*/