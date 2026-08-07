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
            // Space Complexity: O(1)

            // we will fill nums1 in reverse to save space
            int i = m - 1, j = n - 1, idx = m + n - 1;

            while (i >= 0 && j >= 0)
            {
                if (nums1[i] >= nums2[j])
                {
                    nums1[idx--] = nums1[i--];
                }
                else if (nums1[i] < nums2[j])
                {
                    nums1[idx--] = nums2[j--];
                }
            }

            // we dont have issue with j < 0,
            // but if j >= 0, it means all i place move to back of idx
            // we need to fill those i place with j

            while (j >= 0)
            {
                nums1[idx--] = nums2[j--];
            }
        }
    };
}