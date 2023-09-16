/*
Print all pairs for the element present in array.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
    return 0;
}

/* Output:
10, 10
10, 20
10, 30
20, 10
20, 20
20, 30
30, 10
30, 20
30, 30
*/