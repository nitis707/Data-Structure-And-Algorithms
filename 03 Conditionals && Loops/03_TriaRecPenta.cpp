#include<iostream>
using namespace std;

int main()
{
    int sides;
    cout<<"Enter sides: ";
    cin>>sides;

    if(sides==3)
    {
        cout<<"Triangle"<<endl;
    }
    else if (sides == 4)
    {
        cout<<"Rectangle"<<endl;
    }
    else if (sides == 5)
    {
        cout<<"Pentagon"<<endl;
    }
    else {
        cout<<"Mujhe nahi pata"<<endl;
    }
    return 0;
}



/* Output:
Enter sides: 5
Pentagon
*/