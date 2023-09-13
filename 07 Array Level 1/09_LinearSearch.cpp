#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 5, 8, 10};

    int target;
    cout<<"Enter target: ";
    cin>>target;

    int n = 5;

    bool flag = 0;
    // 0 = not found
    // 1 = Found

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            // Found
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Target Found." << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }

    return 0;
}

/* Output:
Enter target: 8
Target Found.
*/