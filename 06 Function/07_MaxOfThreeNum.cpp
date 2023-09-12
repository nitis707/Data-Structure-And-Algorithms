#include <iostream>
using namespace std;

int printMaximum(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        cout << "Maximum is: " << num1 << endl;
    }
    else if (num2 > num1 && num2 >= num3)
    {
        cout << "Maximum is: " << num2 << endl;
    }
    else
    {
        cout << "Maximum is: " << num3 << endl;
    }
}

int main()
{
    printMaximum(4,8,10);
    return 0;
}

// Second Method
#include <iostream>
using namespace std;

int printMaximum2(int num1, int num2, int num3)
{
    int ans1 = max(num1, num2);
    int finalAns = max(ans1, num3);
    return finalAns;
}

int main()
{
    int maximum = printMaximum2(3, 8, 10);
    cout << "Maximum is: " << maximum << endl;
    return 0;
}



/* Output:
Maximum is: 10
*/