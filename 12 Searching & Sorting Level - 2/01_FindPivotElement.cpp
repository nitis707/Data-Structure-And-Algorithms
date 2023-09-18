/* Find Pivot element. */

#include<iostream>
using namespace std;

int findPivotIndex(int arr[], int n)
{
    int s=0, e = n-1;
    int mid = (s+e)/2;

    while(s<=e)
    {
        if(arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
    }
}

int main()
{
    
    return 0;
}