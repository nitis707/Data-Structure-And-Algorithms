/* Problem Statement:
i. 5 size array
ii. 5 input
iii. total sum print
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int num = 5;

    cout << "Enter array of size 5: ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Printing sum: " << sum << endl;

    return 0;
}

/* Output:
Enter array of size 5: 2 4 6 8 10
Printing sum: 30
*/