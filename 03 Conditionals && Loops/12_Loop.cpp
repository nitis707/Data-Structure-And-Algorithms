#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    {
        cout<<"Outer Loop"<<i <<endl;

        for(int j=0; j<3; j++)
        {
            cout<<"Inner loop"<< j <<endl; 
        }
    }
    return 0;
}



/* Output:
Outer Loop0
Inner loop0
Inner loop1
Inner loop2
Outer Loop1
Inner loop0
Inner loop1
Inner loop2
Outer Loop2
Inner loop0
Inner loop1
Inner loop2
Outer Loop3
Inner loop0
Inner loop1
Inner loop2
Outer Loop4
Inner loop0
Inner loop1
Inner loop2
*/