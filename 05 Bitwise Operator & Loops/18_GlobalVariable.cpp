#include <iostream>
using namespace std;
int a = 5;

int main()
{
    for (int i = 0; i < a; i++)
    {
        cout << i << endl;
    }
    cout << "Value of Global a: " << a;
    return 0;
}



/* Output:
0
1
2
3
4
Value of Global a: 5
*/