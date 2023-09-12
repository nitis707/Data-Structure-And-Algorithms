// This is for return that's why is use "int" for function.

#include <iostream>
using namespace std;

int printSum(int a, int b, int c)
{
    int ans = a + b + c;
    return ans;
}

int main()
{
    int sum = printSum(4, 6, 9);
    cout << "Sum of three num: " << sum << endl;
    return 0;
}



/* Output:
Sum of three num: 19
*/