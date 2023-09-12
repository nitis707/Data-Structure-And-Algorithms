#include <iostream>
using namespace std;

void findSumUptoN(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    cout<<"Final Sum: "<<sum<<endl;
}

int main()
{
    int num;
    cout<<"Num: ";
    cin>>num;
    findSumUptoN(num);
    return 0;
}

/*Output:
Num: 5
Final Sum: 15
*/