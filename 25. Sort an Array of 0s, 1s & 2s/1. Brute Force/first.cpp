#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*
        Problem: 75 [leetcode]
        Sort Colors (0s, 1s and 2s)
    */

    class Solution
    {
    public:
        void sortColors(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
        }
    };

    /*
        Time Complexity: O(n logn)
        Space Complexity: O(1)
    */
    return 0;
}