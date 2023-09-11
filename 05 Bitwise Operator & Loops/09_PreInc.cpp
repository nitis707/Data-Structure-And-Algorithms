#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    ++a;
    cout << "First Increment: " << a << endl;

    cout<<"Second Increment: "<<(++a)*10<<endl;

    return 0;
}



/* Output:
First Increment: 6
Second Increment: 70
*/