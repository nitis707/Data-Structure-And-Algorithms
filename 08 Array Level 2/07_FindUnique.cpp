/* Find Unique element.
I/P = 2, 10, 11, 13, 10, 2, 15, 13, 15
Here each element is occuring twice except one i.e 11.
*/

#include <iostream>
using namespace std;

int getUnique(int arr[], int num)
{
    int ans = 0;
    for (int i = 0; i < num; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 10, 11, 13, 10, 2, 15, 13, 15};
    int n = 9;
    int finalAns = getUnique(arr, n);
    cout << "Final answer: " << finalAns << endl;
    return 0;
}

/* Output: 
Final answer: 11
*/