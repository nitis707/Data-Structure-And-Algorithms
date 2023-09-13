#include <iostream>
using namespace std;

void pirntArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    pirntArray(arr, size);
    return 0;
}

/* Output:
2 4 6 8 10
*/