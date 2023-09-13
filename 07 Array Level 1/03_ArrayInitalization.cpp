#include <iostream>
using namespace std;

int main()
{
    // 1st way, without size of array.
    int arr[] = {1, 2, 3, 4, 5};

    // 2nd way, with size of array.
    int brr[5] = {1, 2, 3, 4, 5};

    // 3rd way, Number of element less.
    int crr[5] = {1, 2, 3};

    // 4th way, Num of element extra.
    // int drr[5] = {1, 2, 3, 4, 5, 6, 7, 8, 9};  // It gives error because no. of element is more than size of array.

    cout << "Array Initalization successfully." << endl;

    return 0;
}

/* Output:
Array Initialization successfully.
*/