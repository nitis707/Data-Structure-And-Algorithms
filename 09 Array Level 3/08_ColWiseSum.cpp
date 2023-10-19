/*
Print col-wise sum.
1 2 3 4
5 6 7 8
9 10 1 11
*/

#include <iostream>
using namespace std;

void printColSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "Sum for col " << i << " is: " << sum << endl;
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

    printColSum(arr, row, col);
    
    return 0;
}

/* Output:
Sum for col 0 is: 15
Sum for col 1 is: 18
Sum for col 2 is: 11
Sum for col 3 is: 23
*/