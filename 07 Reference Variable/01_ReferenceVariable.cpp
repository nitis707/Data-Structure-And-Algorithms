#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // k is a reference variable reffering to n.
    int &k = n; // Nickname given to n.

    // c is a ref variable reffering to n.
    int &c = n; // Nickname given to n.

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;
    return 0;
}

/* Output:
n: 5
k: 5
c: 5
*/