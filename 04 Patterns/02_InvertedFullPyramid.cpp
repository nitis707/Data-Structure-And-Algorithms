#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // Inner for Spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // Inner for Stars
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}



/*
Enter N: 5
* * * * * 
 * * * *  
  * * *   
   * *    
    *
*/