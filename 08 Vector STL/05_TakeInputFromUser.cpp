#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Print the vector: " << endl;
    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";

        // another method, it gives same result like above v[i].
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    // insert
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }

    // for push_back more element without asking user
    for (int i = 0; i < 5; i++)
    {
        v.push_back(6);
    }
    printVec(v);

    return 0;
}

/* Output:
Enter n: 5
1 2 3 4 5
Print the vector:
1 2 3 4 5 6 6 6 6 6
*/