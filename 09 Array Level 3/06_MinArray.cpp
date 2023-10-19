#include <iostream>
#include <limits.h>
using namespace std;

int findMin(int arr[][4], int row, int col)
{
    int minAns = INT_MAX;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < minAns)
            {
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}

int main()
{
    int arr[3][4] = {
        {-1, 2, 30, 4},
        {5, 6, 70, 8},
        {9, 10, 0, 11}

    };
    int row = 3;
    int col = 4;

    cout << "Printing the min No.: " << findMin(arr, row, col) << endl;
    return 0;
}

/* Output:
Printing the min No.: -1
*/