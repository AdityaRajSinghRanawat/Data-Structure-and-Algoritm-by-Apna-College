#include <iostream>
#include <vector>
#include <set>
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
            // Space Complexity: O(uniqueTriplets + n)

            int n = nums.size();

            /*
                nums[i] + nums[j] + nums[k] = 0
                .  a    +   b     +    c    = 0

                c = - a - b

                let,
                -a = target

                and since a = nums[i],
                target = -num[i]

                c = target - b

                i.e. we dont need to make 3rd for-loop with k
                nums[k] = target - b

                We will use "Two Sum" to find the "pair"
            */

            set<vector<int>> uniqueTriplets;

            for (int i = 0; i < n; i++)
            {
                int target = -nums[i];
                // for "two sum" approach, for finding "c"
                // we need to find the temp pair for c as "(-a) + (-b)"
                // from now on the "two sum" appoach will continue
                set<int> s;
                for (int j = i + 1; j < n; j++)
                {
                    int toFind = target - nums[j]; // c
                    if (s.find(toFind) != s.end())
                    { // found c
                        vector<int> trip = {nums[i], nums[j], toFind};
                        sort(trip.begin(), trip.end());
                        uniqueTriplets.insert(trip);
                    }
                    s.insert(nums[j]);
                }
            }
            vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
            return ans;
        }
    };

    return 0;
}