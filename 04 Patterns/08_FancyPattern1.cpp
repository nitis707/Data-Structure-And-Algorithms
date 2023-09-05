#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}

/* Output:
Enter num: 5
1
2 * 2
3 * 3 * 3
4 * 4 * 4 * 4
5 * 5 * 5 * 5 * 5
*/