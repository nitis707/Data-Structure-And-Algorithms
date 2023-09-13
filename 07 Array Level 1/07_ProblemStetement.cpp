/* Problem Statement:
i. 10 size array base.
ii. take i/p in the array.
iii. double-up each value of that array
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int num = 10;

    cout << "Taking the value for index: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout<<"Printing after taking input: ";
    for(int i=0; i<num; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout << "Printing after double input: ";
    for (int i = 0; i < num; i++)
    {
        arr[i] = 2 * arr[i];
        cout << arr[i] << " ";
    }
    return 0;
}

/* Output:
Taking the value for index: 10 20 30 40 50 60 70 80 90 100
Printing after taking input: 10 20 30 40 50 60 70 80 90 100 
Printing after double input: 20 40 60 80 100 120 140 160 180 200  
*/