#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*
        Problem: 46 [leetcode]
        Permutations
    */

    class Solution
    {
    public:
        void getPerms(vector<int> &nums, int idx, vector<vector<int>> &ans)
        {
            if (idx == nums.size())
            {
                ans.push_back({nums});
                return;
            }

            for (int i = idx; i < nums.size(); i++)
            {
                // recursion
                swap(nums[idx], nums[i]);
                // recursive fuction
                getPerms(nums, idx + 1, ans);
                // backtracking
                swap(nums[idx], nums[i]);
            }
        }

        vector<vector<int>> permute(vector<int> &nums)
        {
            /*
            .                                  (_) _  _                 ---> idx = 0
            .                            /         |        \
            .                           /          |         \
            .                         1/          2|          \3
            .                         /            |           \
            .                      1(_)_         2(_)_        3(_)_     ---> idx = 1
            .                        /\           /\           /\
            .                      2/  \3       1/  \3       1/  \2
            .                      /    \       /    \       /    \
            .                   12(_) 13(_)  21(_) 23(_)   31(_) 32(_)  ---> idx = 2
            .                     |      |      |     |     |      |
            .                    123    132    213   231   312    321   ---> idx = 3
            */

            /*
                Time Complexity:

                TC = total number of recurrence calls * work in each call

                total calls = n!

                n = size of arr
                e.g.
                arr = {1, 2, 3}
                ans = {{1,2,3}, {1,3,2}, {2,1,3}, {2,3,1}, {3,1,2}, {3,2,1}}
                total calls = 6
                i.e.
                n! = 3! = 6

                but, we also took "n" different brances to reach a call.
                total calls = n! * n

                TC = total calls * work in each call
                TC = (n! * n) * O(1)
                TC = n! * n
            */

            /*
                SC = number of permutation + how deep you went in recursive tree

                SC = n! + n
                SC = O(n!)   // storage of ans
            */

            vector<vector<int>> ans;
            getPerms(nums, 0, ans);
            return ans;
        }
    };

    return 0;
}