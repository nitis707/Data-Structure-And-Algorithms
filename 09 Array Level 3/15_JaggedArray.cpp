#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr; // 2D vector.

    vector<int> vec1(5, 1);
    vector<int> vec2(4, 2);
    vector<int> vec3(3, 3);
    vector<int> vec4(2, 4);
    vector<int> vec5(1, 5);

    arr.push_back(vec1);
    arr.push_back(vec2);
    arr.push_back(vec3);
    arr.push_back(vec4);
    arr.push_back(vec5);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/* OUtput:
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 
*/