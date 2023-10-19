/*
Program to print maximum in 2-D Array.
I/P - 1 2 30 4
      5 6 70 8
      9 10 1 11
*/

#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[][4], int row, int col)
{
    int maxAns = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxAns)
            {
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int main()
{
    int row = 3;
    int col = 4;

    int arr[3][4] = {
        {1, 2, 30, 4},
        {5, 6, 70, 8},
        {9, 10, 1, 11}

    };
    cout << "Printing the max No.: " << findMax(arr, row, col) << endl;

    return 0;
}

/* Output:
Printing the max No.: 70
*/