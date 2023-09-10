#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    cout << "First: " << ++a << endl;

    // a = 22
    cout << "Second: " << a++ << endl;

    // verify karte h
    cout << "Verify: " << a << endl;
    return 0;
}

/* Output:
First: 22
Second: 22
Verify: 23
*/