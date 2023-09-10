#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    --a;
    cout << "First Decremet: " << a << endl;

    cout << "Second Decrement: " << (--a) * 10 << endl;

    return 0;
}

/* Output:
First Decremet: 4
Second Decrement: 30
*/