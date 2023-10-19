/*
Program to print transpose of square matrix.
I/P - 1 2 3
      4 5 6
      7 8 9
*/

#include <iostream>
using namespace std;

void transpose(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Print 2D-Array
// void printArray(int arr[][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

int main()
{
    // initialization of 2D array
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int row = 3;
    int col = 3;

    // cout << "Printing before transpose: " << endl;
    // printArray(arr, row, col);

    cout << "Transpose: " << endl;
    transpose(arr, row, col);

    // cout << endl << "Printing transpose: " << endl;
    // printArray(arr, row, col);

    return 0;
}

/* Output:
Transpose: 
1 4 7      
2 5 8
3 6 9
*/