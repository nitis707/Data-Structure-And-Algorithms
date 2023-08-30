/*
 * * * *
 * * * *
 * * * *
 * * * *
 */

#include <iostream>
using namespace std;

int main()
{
    // Outer loop -- rows
    for (int i = 0; i < 4; i++)
    {
        // Print 4 stars
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}