#include <iostream>
using namespace std;

void shiftArray(int arr[], int n)
{
    int brr[6];
    int k;

    cout << "Enter shift by K: ";
    cin >> k;

    int newIndex = 0;

    for (int index = 0; index < n; index++)
    {
        newIndex = (index + k) % n;
        brr[newIndex] = arr[index];
    }

    cout << "After shift: " << endl;
    for (int index = 0; index < n; index++)
    {
        cout << brr[index] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    shiftArray(arr, n);
    return 0;
}

/* Output:
Enter shift by K: 2
After shift: 
50 60 10 20 30 40
*/