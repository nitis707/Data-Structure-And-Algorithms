#include<iostream>
using namespace std;

void printName(string Name)
{
    for(int i=0; i<5; i++)
    {
        cout<<Name<<endl;
    }
}

int main()
{
    printName("Nitish");
    printName("Singh");
    return 0;
}



/* Output:
Nitish
Nitish
Nitish
Nitish
Nitish
Singh 
Singh 
Singh 
Singh 
Singh
*/