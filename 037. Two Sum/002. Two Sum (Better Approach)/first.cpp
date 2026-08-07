#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*
        Problem: 1 [leetcode]
        Two Sum
    */
    class Solution
    {
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            // Time Complexity: O(n logn)
            vector<pair<int, int>> v; // copy of original vector
            int n = nums.size();

            for (int i = 0; i < n; i++)
            {
                v.push_back({nums[i], i}); // (value, index)
            }
            /*
                e.g.
                {2, 0}
                {7, 1}
                {3, 2}
                {8, 3}
                {5, 4}
            */
            sort(v.begin(), v.end());
            /*
                e.g.
                {0, 2}
                {1, 1}
                {2, 0}
                {3, 2}
                {4, 4}
            */

            int st = 0, end = n - 1;

            while (st < end)
            {
                int sum = v[st].first + v[end].first;

                if (sum > target)
                {
                    end--;
                }
                else if (sum < target)
                {
                    st++;
                }
                else
                {
                    return {v[st].second, v[end].second};
                }
            }
            return {};
        }
    };

    return 0;
}