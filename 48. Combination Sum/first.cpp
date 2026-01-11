#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    /*
        Problem: 39 [leetcode]
        Combination Sum
    */

    class Solution
    {
    public:
        // unique combination set
        set<vector<int>> s;

        void getAllCombination(vector<int> &arr, int target, int idx, vector<vector<int>> &ans, vector<int> &combin)
        {
            if (idx == arr.size() || target < 0)
            {
                return;
            }

            if (target == 0)
            {
                if (s.find(combin) == s.end())
                { // not found
                    s.insert(combin);
                    ans.push_back({combin});
                }
            }

            combin.push_back(arr[idx]); // include current

            // single:
            getAllCombination(arr, target - arr[idx], idx + 1, ans, combin); // include and move next
            // multiple:
            getAllCombination(arr, target - arr[idx], idx, ans, combin); // incule continously

            combin.pop_back(); // empty the last/current element for exclude step

            // exclude:
            getAllCombination(arr, target, idx + 1, ans, combin); // move to next index
        }

        vector<vector<int>> combinationSum(vector<int> &candidates, int target)
        {
            // Time Complexity : O(3^(target)) = O(3^T)

            // Space Complexity: O(target + number of valid combination*target)
            // SC = O(T + KT)

            vector<vector<int>> ans;
            vector<int> combin;

            getAllCombination(candidates, target, 0, ans, combin);

            return ans;
        }
    };

    return 0;
}