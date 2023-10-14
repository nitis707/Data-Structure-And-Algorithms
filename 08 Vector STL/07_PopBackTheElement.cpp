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
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter the data in vector: ";
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    printVec(v);

    // Clear Vector
    v.clear();

    // To verify it's is clear or not.
    v.push_back(50);

    printVec(v);

    v.pop_back();

    printVec(v);

    return 0;
}

/* Output:
Enter n: 5
Enter the data in vector: 1 2 3 4 5
Print the vector: 
1 2 3 4 5 
Print the vector: 
50 
Print the vector: 
                    // Here printed nothing because pop_back remove all the element.
*/