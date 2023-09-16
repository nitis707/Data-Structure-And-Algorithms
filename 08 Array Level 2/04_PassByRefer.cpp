#include <iostream>
using namespace std;

void passByRefer(int &b)
{
    b--;
    cout << "Value of b: " << b+5 << endl;
}

int main()
{
    int a = 9;
    a++;
    passByRefer(a);
    cout << "Value of a: " << a << endl;
    return 0;
}

/* Output:
Value of b: 14
Value of a: 9
*/