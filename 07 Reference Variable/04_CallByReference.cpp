#include <iostream>
using namespace std;

void incrementBy1(int &k)
{
    k = k + 1;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    incrementBy1(n);
    cout << "Incremented n: " << n << endl;

    return 0;
}

/* Output:
Enter n: 5
Incremented n: 6
*/