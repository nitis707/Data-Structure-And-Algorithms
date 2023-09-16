#include <iostream>
using namespace std;

void passByRefer(int &jaadu)
{
    jaadu--;
    cout << "Jaadu: " << jaadu + 10 << endl;
}

int main()
{
    int sundari = 100;
    sundari--;
    sundari = sundari - 5;
    passByRefer(sundari);
    cout << "Sundari: " << sundari << endl;
    return 0;
}

/* Output:
Jaadu: 103
Sundari: 93
*/