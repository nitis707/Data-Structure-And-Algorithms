#include <iostream>
using namespace std;

void printSumOfEvenUptoN(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        
    }
    cout << "Print sum of Even: " << sum << endl;
}

int main()
{
    int num;
    cout << "Enter a positive num: ";
    cin >> num;
    printSumOfEvenUptoN(num);
    return 0;
}

/* Output:
Enter a positive num: 10
Print sum of Even: 30
*/