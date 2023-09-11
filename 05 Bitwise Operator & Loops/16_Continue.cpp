#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}



/* Output:
0
1
2
4
*/