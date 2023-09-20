#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    while (1)
    {
        int data;
        cin >> data;
        v.push_back(data);

        cout << "Capacity: " << v.capacity() << " "
             << "Size: " << v.size() << endl;
    }
    return 0;
}

/* Output:
1 2 3 4 5
Capacity: 1 Size: 1
Capacity: 2 Size: 2
Capacity: 4 Size: 3
Capacity: 4 Size: 4
Capacity: 8 Size: 5
*/