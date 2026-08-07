#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*
        Problem: 18 [leetcode]
        4Sum
    */
    class Solution
    {
    public:
        vector<vector<int>> fourSum(vector<int> &nums, int target)
        {
            // Time Complexity:  O(n^3 * nlog(n))
            // Space Complexity: O(uniqueTriplets)

            vector<vector<int>> ans;
            int n = nums.size();

            sort(nums.begin(), nums.end());

            // Edge Case:
            // [ -2 | -2 | -1 | -1 | 1 | 1 | 2 | 2 ]
            // .  i    j    p                    q
            // or
            // .       i    j   p                q
            // both give same answer i.e. [-2, -2, -1, 2]

            for (int i = 0; i < n; i++)
            {

                // optimization for "i":
                if (i > 0 && (nums[i] == nums[i - 1]))
                {
                    continue;
                }

                for (int j = i + 1; j < n;)
                {

                    int p = j + 1, q = n - 1;
                    while (p < q)
                    {
                        long long sum = (long long)nums[i] + (long long)nums[j] +
                                        (long long)nums[p] + (long long)nums[q];
                        if (sum < target)
                        {
                            p++;
                        }
                        else if (sum > target)
                        {
                            q--;
                        }
                        else if (sum == target)
                        {
                            ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                            p++, q--;

                            // optimization for "p":
                            while (p < q && (nums[p] == nums[p - 1]))
                            {
                                p++;
                            }

                            // optimization for "q":
                            while (p < q && (nums[q] == nums[q + 1]))
                            {
                                q--;
                            }
                        }
                    }

                    // we run above code to run the possible answer of "j" for once

                    // now if this "j++" runs in for loop then it will
                    // increase the number by twice so we used it here
                    j++;

                    // optimization for "j":
                    while (j < n && (nums[j] == nums[j - 1]))
                    {
                        j++;
                    }
                }
            }

            return ans;
        }
    };

    return 0;
}