#include <iostream>
using namespace std;

int incrementBy1(int n)
{
    n = n + 1;
    return n;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    n = incrementBy1(n);
    cout << "Incremented value: " << n << endl;
    return 0;
}

/* Output:
Enter n: 6
Incremented value: 7
*/