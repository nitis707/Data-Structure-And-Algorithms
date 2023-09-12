#include <iostream>
using namespace std;

int checkEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}

int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    checkEvenOdd(num);
    return 0;
}



/* Output:
Enter num: 5
Odd
*/