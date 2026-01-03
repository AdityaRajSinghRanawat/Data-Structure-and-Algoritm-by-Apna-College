#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*
        Problem: 15 [leetcode]
        3Sum
    */
    class Solution
    {
    public:
        vector<vector<int>> threeSum(vector<int> &nums)
        {

            // Time Complexity:  O(n^2 * log(uniqueTriplets))
            // Space Complexity: O(uniqueTriplets)

            int n = nums.size();
            vector<vector<int>> ans;

            sort(nums.begin(), nums.end());

            for (int i = 0; i < n; i++)
            {
                // opimization for "i":
                // eg. [4, -1, -1, 0, 2]
                // -1 and -1 as "i" will be a repeating value
                if (i > 0 && (nums[i] == nums[i - 1]))
                {
                    continue;
                }

                int j = i + 1, k = n - 1;
                // j < = k is not considered since we want unique 3 numbers
                while (j < k)
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum > 0)
                    {
                        k--;
                    }
                    else if (sum < 0)
                    {
                        j++;
                    }
                    else if (sum == 0)
                    {
                        // no need for "trip" and "set" check since "nums" is
                        // already sorted
                        ans.push_back({nums[i], nums[j], nums[k]});
                        j++, k--;

                        // optimization for "j":
                        while (j < k && (nums[j] == nums[j - 1]))
                        {
                            j++;
                        }

                        // optimization for "k":
                        while (j < k && (nums[k] == nums[k + 1]))
                        {
                            k--;
                        }
                    }
                }
            }
            return ans;
        }
    };

    return 0;
}