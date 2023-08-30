#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;

    if (age>=18)
    {
        cout<<"Eligible for licence."<<endl;
    }
    else {
        cout<<"Not eligible for licence."<<endl;
    }
    return 0;
}

/* Output:
Enter age: 34
Eligible for licence.
*/