#include <iostream>
using namespace std;

void passByValue(int m)
{
    m--;
    m = m * 10;
    cout << "Value of m: " << m << endl;
}

int main()
{
    int marks = 90;
    marks++;
    passByValue(marks);
    cout << "Marks: " << marks << endl;
    return 0;
}

/* Output:
Value of m: 900
Marks: 91
*/