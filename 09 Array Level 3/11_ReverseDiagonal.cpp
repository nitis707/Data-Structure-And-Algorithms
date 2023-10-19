/*
Print Reverse Diagonal sum.
1 2 3 4
5 6 7 8
9 10 2 11
9 10 1 11
*/

#include <iostream>
using namespace std;

void printReverseDiagonal(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i][3 - i];
    }
    cout << "Sum of reverse diagonal: " << sum << endl;
}

int main()
{
    int row = 4;
    int col = 4;

    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 2, 11},
        {9, 10, 1, 11}};

    printReverseDiagonal(arr, row, col);

    return 0;
}

/* Output: 
Sum of reverse diagonal: 30
*/