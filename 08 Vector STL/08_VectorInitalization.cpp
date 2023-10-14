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
    printVec(arr2);
    return 0;
}

/* Output:
Printing vector: 
-1 -1 -1 -1 -1 
*/