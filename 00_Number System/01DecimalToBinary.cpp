#include <iostream>
using namespace std;

int decimalToBinaryMethod1(int n)
{
    // Division Method
    cout<< "Binary number of "<< n << " is: ";
    while (n > 0)
    {
        int bit = n % 2;
        cout << bit;
        n = n / 2;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter a Decimal Number: ";
    cin >> n;
    int binary = decimalToBinaryMethod1(n);
}