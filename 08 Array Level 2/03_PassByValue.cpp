#include <iostream>
using namespace std;

void passByValue(int jaadu)
{
    jaadu--;
    cout << "Jaadu: " << jaadu << endl;
}

int main()
{
    int sundari = 100;
    sundari--;
    sundari = sundari - 5;
    passByValue(sundari);
    cout << "Sundari: " << sundari << endl;
    return 0;
}

/* Output:
Jaadu: 93
Sundari: 94
*/