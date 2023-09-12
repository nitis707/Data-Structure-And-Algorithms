#include <iostream>
using namespace std;

int printSum(int a, int b)
{
    int sum = a + b;
    cout << "Sum: " << sum << endl;
    return sum;
}

int main()
{
    printSum(2, 3);
    return 0;
}



/* Output:
Sum: 5
*/