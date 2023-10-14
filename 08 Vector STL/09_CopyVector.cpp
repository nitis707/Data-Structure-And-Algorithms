#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Printing vector: " << endl;
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vector initializatio
    vector<int> arr; // default with not data, 0 size

    vector<int> arr2(5, -1); // init with n size with specific data

    // Copy the vector
    vector<int>arr3 = {1, 2, 3, 4, 5};
    // another vector but we want that initalize with arr3.
    vector<int>arr4(arr3);
    printVec(arr4);
    return 0;
}

/* Output:
Printing vector: 
1 2 3 4 5 
*/