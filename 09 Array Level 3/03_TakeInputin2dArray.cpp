#include <iostream>
using namespace std;

int printArray(int arr[2][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "row index " << i << " ";
            cout << "col index " << j << " :";
            cin >> arr[i][j];
        }
    }
}

int main()
{
    int row = 2;
    int col = 3;
    int arr[2][3];

    printArray(arr, row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

/* Output:
row index 0 col index 0 :10
row index 0 col index 1 :20
row index 0 col index 2 :30
row index 1 col index 0 :40
row index 1 col index 1 :50
row index 1 col index 2 :60
10 20 30
40 50 60
*/