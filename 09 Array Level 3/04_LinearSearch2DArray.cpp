#include <iostream>
using namespace std;

bool findTarget(int arr[][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                // if found, return true.
                return true; // it return 1 that means it is true
            }
        }
    }
    // iss line pr tabhi aa sakte ho,
    // jab sare ke sare elements check ho chuke honge
    // and target nahi mila hoga
    // return false.
    return false; // it return 0 that means it is false
}

int main()
{
    int row = 3;
    int col = 4;
    int target = 11;

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 1, 11}};

    cout << "Fount or Not: " << findTarget(arr, row, col, target) << endl;
    
    return 0;
}

/* Output:
Fount or Not: 1
*/