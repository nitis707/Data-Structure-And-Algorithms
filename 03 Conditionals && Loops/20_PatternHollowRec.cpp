#include <iostream>
using namespace std;

int main()
{
    // Outer loop
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (row == 0 || row == 4 || col == 0 || col == 4)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // Two spaces to maintain spacing
            }
        }
        cout << endl;
    }
    return 0;
}



/* Output:
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
*/