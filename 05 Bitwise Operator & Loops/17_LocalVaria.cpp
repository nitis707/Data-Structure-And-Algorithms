#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
    
    //cout << i << endl; // Error because It is outside the loop Local variable can't access reason is out of scope.
    return 0;
}