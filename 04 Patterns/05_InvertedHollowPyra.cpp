#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;

    for (int row = 0; row < num; row = row + 1)
    {
        // spaces
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }

        // stars
        //  int totalCol = num-row;
        for (int col = 0; col < num - row; col = col + 1)
        {
            // if first or last col
            if (col == 0 || col == num - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

/* Output:
Enter num: 5
*       * 
 *     *  
  *   *   
   * * 
    * 
*/