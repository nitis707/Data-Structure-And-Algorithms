#include <iostream>
using namespace std;

void passByValue(int a)
{
    a--;
    a = a / 7;
    cout << "A in void: " << a << endl;
}

int main()
{
    int a = 9;
    a++;
    a = a * 5;
    passByValue(a);
    cout << "A in main: " << a << endl;
    return 0;
}

/* Output:
A in void: 7
A in main: 50
*/