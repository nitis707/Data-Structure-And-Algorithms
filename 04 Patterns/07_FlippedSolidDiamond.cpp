#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;

    num = num/2;

    // First Part
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num - row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < num - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Second Part
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < 2 * num - 2 * row - 1; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/* Output:
Enter num: 10
* * * * *   * * * * * 
* * * *       * * * * 
* * *           * * * 
* *               * * 
*                   * 
*                   * 
* *               * * 
* * *           * * * 
* * * *       * * * * 
* * * * *   * * * * *
*/