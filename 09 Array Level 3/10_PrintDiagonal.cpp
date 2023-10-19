/*
Print Diagonal.
1 2 3 4
5 6 7 8
9 10 2 11
9 10 1 11
*/

#include <iostream>
using namespace std;

void printDiagonal(int arr[][4], int row, int col)
{
    cout << "Diagonal is: ";
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][i] << " ";
    }
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

    printDiagonal(arr, row, col);
    return 0;
}

/* Output:
Diagonal is: 1 6 2 11
*/