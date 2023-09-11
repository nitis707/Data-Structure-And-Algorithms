#include <iostream>
using namespace std;

int main()
{
    int ROWS;
    cin >> ROWS;

    int COLS;
    cin >> COLS;

    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            if (row == 0 || row == ROWS - 1 || col == 0 || col == COLS - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // Use two spaces to maintain consistent spacing
            }
        }
        cout << endl;
    }
    return 0;
}



/* Output:
5
7
* * * * * * * 
*           * 
*           * 
*           * 
* * * * * * * 
*/