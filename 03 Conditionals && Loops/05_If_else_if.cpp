#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    if (a > 5)
    {
        if (c > 10)
        {
            cout << "Sanik" << endl;
        }
    }
    else
    {
        if (b == 10)
        {
            if (c >= 10)
            {
                cout << "Sipahi";
            }
        }
    }
    return 0;
}

/* Output:
Enter the value of a: 5
Enter the value of b: 10
Enter the value of c: 15
Sipahi
*/