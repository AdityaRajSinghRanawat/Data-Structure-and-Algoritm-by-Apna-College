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

            // Time Complexity:  O(n^3 * log(uniqueTriplets))
            // Space Complexity: O(uniqueTriplets)

            vector<vector<int>> ans;
            int n = nums.size();

            // why not used the unordered_set:
            /*
                we can store this in "unordered" set but it
                would be hard to make a custom hash function
                which can become tricky some times
            */
            set<vector<int>> s; // set<uniqueTriples>

            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (nums[i] + nums[j] + nums[k] == 0)
                        {

                            vector<int> trip = {nums[i], nums[j], nums[k]};
                            sort(trip.begin(), trip.end());

                            if (s.find(trip) == s.end())
                            {                        // not found
                                s.insert(trip);      // checker set
                                ans.push_back(trip); // original ans
                            }
                        }
                    }
                }
            }

            return ans;
        }
    };

    return 0;
}