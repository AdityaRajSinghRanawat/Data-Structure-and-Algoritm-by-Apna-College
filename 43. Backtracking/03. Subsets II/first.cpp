#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*
        Problem: 90 [leetcode]
        Subsets II
    */

    class Solution
    {
    public:
        // helper
        void getAllSubsets(vector<int> &nums, vector<int> &ans, int i,
                           vector<vector<int>> &finalSubset)
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

            // skip dublicate index elements
            int idx = i + 1; // check next call "i+1"
            while ((idx < nums.size()) && (nums[idx] == nums[idx - 1]))
            {
                idx++;
            }

            // exclude
            getAllSubsets(nums, ans, idx, finalSubset);
        }

        vector<vector<int>> subsetsWithDup(vector<int> &nums)
        {
            /*
                arr = {1, 2, 2}

                .                               {(1),2,2}[]                        ---> i = 0
                .                              /           \
                .                  {1,(2),2}[1]             {1,(2),2}[]            ---> i = 1
                .                  /   \                          /   \
                .    {1,2,(2)}[1,2]    {1,2,(2)}[1]   {1,2,(2)}[2]    {1,2,(2)}[]  ---> i = 2
                .       /     \          /      \        /      \      /      \
                .   [1,2,2]  [1,2]    [1,2]     [1]   [2,2]     [2]   [2]     []   ---> i = 3

                we see since we had duplicate numbers in the array,
                thats why we got duplicate subsets for [1,2,2] and [2,2]
            */
            /*
                .                  {1,(2),2}[1]
                .     (include 2)  /          \  (exclude 2)
                .        {1,2,(2)}[1,2]    {1,2,(2)}[1]
                .     (exclude 2)  \          /  (include 2)
                .                 [1,2]    [1,2]

                this arrises because in two identical branches,
                we are including and excluding the "2"

                so if we ever make decision to include/exclude 2,
                then we should skip the next 2's

                e.g.
                {1, 2, 2, 2, 2, 3}
                .      x  x  x

                i.e.
                .            {1,(2),2}[1]
                .             /       \
                .                   {1,2,(2)}[1]

                i.e.
                .               arr[i]
                .              /      \
                .                   arr[i+1]

                i.e.
                arr[i] == arr[i+1] => skip arr[i+1]
            */

            // Time Complexity:

            // O((2^n * n) + nlogn)
            // "nlogn" because of sorting, but its too small so neglect it
            // O(2^n * n)

            sort(nums.begin(), nums.end());

            vector<vector<int>> finalSubset;
            vector<int> ans;

            getAllSubsets(nums, ans, 0, finalSubset);

            return finalSubset;
        }
    };

    return 0;
}