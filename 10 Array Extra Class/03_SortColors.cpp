/* 75. Sort Colors

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]

Constraints:
n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
*/

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int index = 0;
    int left = 0;
    int right = n - 1;

    while (index <= right)
    {
        if (nums[index] == 0)
        {
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if (nums[index] == 2)
        {
            swap(nums[index], nums[right]);
            right--;

            // catch -- no need of index++
            // index++;
        }
        else
        {
            index++;
        }
    }
}

int main()
{

    return 0;
}