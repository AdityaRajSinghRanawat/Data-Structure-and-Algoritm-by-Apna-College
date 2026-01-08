#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 78 [leetcode]
        Subsets
    */
    class Solution
    {
    public:
        // helper
        void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &finalSubset)
        {
            if (i == nums.size())
            {
                // store subsets
                finalSubset.push_back({ans});
                return;
            }

            // include
            ans.push_back(nums[i]);

            getAllSubsets(nums, ans, i + 1, finalSubset);
            // backtracking
            ans.pop_back();

            // exclude
            getAllSubsets(nums, ans, i + 1, finalSubset);
        }

        vector<vector<int>> subsets(vector<int> &nums)
        {
            // Time Complexity: O(2^n * n)

            vector<vector<int>> finalSubset;
            vector<int> ans;

            getAllSubsets(nums, ans, 0, finalSubset);

            return finalSubset;
        }
    };

    return 0;
}