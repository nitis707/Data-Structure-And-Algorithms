#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    {
        cout<<"Outer Loop"<<i <<endl;

        for(int j=0; j<3; j=j+1)
        {
            cout<<"Inner loop"<< j <<endl; 
        }
    }
    return 0;
}