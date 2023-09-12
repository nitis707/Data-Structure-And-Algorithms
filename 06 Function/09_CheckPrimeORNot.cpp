#include <iostream>
using namespace std;

bool checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            // Remainder = 0 perfectly divisible
            // Not prime no.
            return false;
        }
    }
    // Perfectly not divisible
    //  It is prime no.
    return true;
}

int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;
    bool prime = checkPrime(num);

    if (prime)
    {
        cout << "It's is a prime number" << endl;
    }
    else
    {
        cout << "It's not a prime number" << endl;
    }
    return 0;
}

/* Output:
Enter num: 5
It's is a prime number
*/