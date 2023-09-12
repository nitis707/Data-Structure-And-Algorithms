// This is for print that's why i use "void" function.

#include <iostream>
using namespace std;

void printSum(int a, int b, int c)
{
    int sum = a + b + c;
    cout << "Sum of three Num: " << sum << endl;
}

int main()
{
    printSum(2, 5, 7);
    return 0;
}

/* Output:
Sum of three Num: 14
*/