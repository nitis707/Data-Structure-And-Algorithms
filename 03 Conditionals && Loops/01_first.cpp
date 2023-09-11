#include <iostream>
using namespace std;

int main()
{
    int balance;
    cout << "Enter value of balance: ";
    cin >> balance;

    if (balance >= 10)
    {
        cout << "Maggi" << endl;
    }
    else
    {
        cout << "Kurkure" << endl;
    }
    return 0;
}



/*Output:
Enter value of balance: 56
Maggi
*/