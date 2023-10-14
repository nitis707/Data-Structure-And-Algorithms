#include <iostream>
#include <vector>
using namespace std;

void printVec1(vector<int> v)
{
}

void printVec2(vector<int> v)
{
    cout << "Printing vector method2: " << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    printVec2(v);
    return 0;
}

/* Output:
Printing vector method2: 
10 20 30 40 
*/