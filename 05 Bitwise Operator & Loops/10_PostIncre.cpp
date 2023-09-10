#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    a++;
    cout << "First PostIncre: " << a << endl;

    a++;
    cout << "Second PostIncre: " << (a) * 10 << endl;
    return 0;
}

/* Output:
First PostIncre: 6
Second PostIncre: 70
*/