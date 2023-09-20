#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Print the vector: ";

    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    printVec(v);

    v.pop_back();
    printVec(v);

    v.pop_back();
    printVec(v);
    return 0;
}

/* Output:
Print the vector: 1 2 3
Print the vector: 1 2
Print the vector: 1
*/