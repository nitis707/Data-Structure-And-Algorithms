#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // Inner Loop Space
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // Inner Loop Stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}



/* Output:
Enter N: 10
         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
  * * * * * * * *
 * * * * * * * * *
* * * * * * * * * *
*/