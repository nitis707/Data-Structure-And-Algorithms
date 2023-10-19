/*
Print row-wise sum.
1 2 3 4
5 6 7 8
9 10 1 11
*/

#include <iostream>
using namespace std;

void printRowSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum for row " << i << " is: " << sum << endl;
    }
}

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 1, 11}};

    int row = 3;
    int col = 4;

    printRowSum(arr, row, col);
    
    return 0;
}

/* Output:
Sum for row 0 is: 10
Sum for row 1 is: 26
Sum for row 2 is: 31
*/