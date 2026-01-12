#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    /*
        Problem: 31 [leetcode]
        Next Permutation
    */

    class Solution
    {
    public:
        void nextPermutation(vector<int> &nums)
        {
            // Time Complexity:  O(n * log n)
            // Space Complexity: O(log n)      [due to sort function]

            // find next permutation and if not exist then sort
            if (!next_permutation(nums.begin(), nums.end())) // O(n)
            {
                sort(nums.begin(), nums.end()); // O(log n)
            }
        }
    };
}