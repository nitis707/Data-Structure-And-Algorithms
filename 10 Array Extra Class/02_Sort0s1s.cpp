/*
Program for sorting 0's & 1's complement.
*/

#include <iostream>
#include <vector>
using namespace std;

void organiseArray(int arr[], int size)
{
    int index = 0;
    int left = 0;
    int right = size - 1;

    while (index <= right)
    {
        if (arr[index] == 0)
        {
            swap(arr[index], arr[left]);
            left++;
            index++;
        }
        else if (arr[index] == 2)
        {
            swap(arr[index], arr[right]);
            right--;

            // catch -- no need of index++
            // index++;
        }
        else
        {
            index++;
        }
    }

    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 1, 2, 2, 0, 1, 2, 0};
    int size = 9;
    organiseArray(arr, size);
    return 0;
}

/* Output:
Sorted array: 
0 0 0 1 1 1 2 2 2 
*/