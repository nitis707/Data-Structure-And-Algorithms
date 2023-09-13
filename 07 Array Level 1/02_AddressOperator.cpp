#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int arr[10];

    cout << "Address of a: " << &a << endl;
    cout << "Size of a: " << sizeof(a) << " bytes." << endl;

    cout << "Address of arr: " << &arr << endl;
    cout << "Size of arr: " << sizeof(arr) << " bytes." << endl;

    return 0;
}

/* Output:
Address of a: 0x61ff0c
Size of a: 4 bytes.
Address of arr: 0x61fee4
Size of arr: 40 bytes.
*/