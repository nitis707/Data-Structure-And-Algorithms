/*
Program to find msising number in Array range 0 - n.

I/P - 1 4 2 1 5  & n = 5

*/

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int actualSum = 0;
    int ans = actualSum - sum;
    return ans;
}

int main()
{
    vector<int> arr{1, 4, 2, 1, 5};
    int n = 5;

    int findMissing = missingNumber(arr, n);
    cout << "The missing number is: " << findMissing << endl;

    return 0;
}