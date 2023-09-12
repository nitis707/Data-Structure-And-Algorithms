#include <iostream>
using namespace std;

void countOneToN(int n)
{
    cout << "Counting: " << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    countOneToN(n);
    return 0;
}



/* Output:
Enter N: 5
Counting: 
0
1
2
3
4
5
*/