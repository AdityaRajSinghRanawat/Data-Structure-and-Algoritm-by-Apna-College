#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 88 [leetcode]
        Merge Sorted Arrays
    */

    class Solution
    {
    public:
        void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
        {
            // Time Complexity: O(m + n)
            // Space Complexity: O(m + n)

            vector<int> ans(m + n);
            int i = 0, j = 0, idx = 0;

            while (i < m && j < n)
            {
                if (nums1[i] <= nums2[j])
                {
                    ans[idx] = nums1[i];
                    i++;
                }
                else if (nums1[i] > nums2[j])
                {
                    ans[idx] = nums2[j];
                    j++;
                }
                idx++;
            }

            if (i == m)
            {
                while (j != n)
                {
                    ans[idx] = nums2[j];
                    idx++, j++;
                }
            }
            else if (j == n)
            {
                while (i != m)
                {
                    ans[idx] = nums1[i];
                    idx++, i++;
                }
            }

            nums1 = ans;
        }
    };
}