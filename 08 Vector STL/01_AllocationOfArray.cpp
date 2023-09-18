#include <iostream>
using namespace std;

void fun(int arr[], int n)
{
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int num;
    cout << "Enter size of array: ";
    cin >> num;

    int *arr = new int[num];

    cout << "Enter elements for array: ";
    for (int i = 0; i < num; i++)
    {
        int elements;
        cin >> elements;
        arr[i] = elements;
    }

    fun(arr, num);
    return 0;
}

/* Output:
Enter elements for array: 2 4 6
Array elements are: 2 4 6 
*/