#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int n = 5;
    // Taking input in an Array.
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for index " << i << " : ";
        cin >> arr[i];
    }

    // Printing the Array.
    cout << "Printing the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}