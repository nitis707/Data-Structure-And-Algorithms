#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // Found
            return true;
        }
    }
    // Not found
    return false;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int target;
    cout << "Enter target: ";
    cin >> target;

    bool ans = linearSearch(arr, size, target);

    if (ans == 1)
    {
        cout << "Target found" << endl;
    }
    else
    {
        cout << "Target Not found" << endl;
    }
    return 0;
}

/* Output:
Enter target: 65
Target Not found.
*/