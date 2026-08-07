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
            // Time Complexity:  O(n)
            // Space Complexity: O(1)

            // step 1:
            // find pivot
            int pivot = -1, n = nums.size();

            for (int i = n - 2; i >= 0; i--)
            {
                if (nums[i] < nums[i + 1])
                {
                    pivot = i;
                    break;
                }
            }

            // no next permutation exist e.g. 321 ==> 123
            if (pivot == -1)
            {
                reverse(nums.begin(), nums.end());
                return;
            }

            // step 2:
            // find just bigger than pivot number in RHS of pivot e.g. 3841 => 4831
            for (int i = n - 1; i >= pivot; i--)
            {
                if (nums[i] > nums[pivot])
                {
                    swap(nums[i], nums[pivot]);
                    break;
                }
            }

            // step 3:
            // reverse(nums.begin() + pivot + 1, nums.end());
            // or
            int i = pivot + 1, j = n - 1;
            while (i <= j)
            {
                swap(nums[i++], nums[j--]);
            }
        }
    };
}