#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << (++a) * (a++) << endl;
    cout <<"a: "<< a << endl;
    return 0;
}

/* Output:
132/121 why two types of value in diff compler
a: 12
*/