#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    int size = v.size(); // To find size of vector.

    cout << "Print vector: ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " "; // To print the vector.
    }
}

int main()
{
    vector<int> v;

    // To push or insert the elements in vector.
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    print(v); // Function call.
    return 0;
}

/* Output:
Print vector: 1 2 3 4
*/