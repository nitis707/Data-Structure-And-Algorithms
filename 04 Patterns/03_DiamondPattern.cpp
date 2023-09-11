#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter N: ";
    cin>>n;

    n = n/2; // For full & half pyramid.

    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n-row-1; col++)
        {
            cout<<" ";
        }
        for(int col=0; col<row+1; col++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }

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



/* Output:
Enter N: 10
    *     
   * *    
  * * *   
 * * * *  
* * * * * 
* * * * * 
 * * * *  
  * * *   
   * *    
    *
*/