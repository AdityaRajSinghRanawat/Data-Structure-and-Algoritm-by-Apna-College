#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 560 [leetcode]
        Subarray Sum Equals K
    */
    class Solution
    {
    public:
        int subarraySum(vector<int> &nums, int k)
        {
            // Time Complexity:  O(n^2)
            // Space Complexity: O(1)

            /*
                [ 9 | 4 | 20 | 3 | 10 | 5 ]
                . i = j
                . i ------>j
                . i --------------->j

                we do not need to calculate the sum again and again,
                we can use the old results to get new value.

                9 + 4 + 20 + 3 = 36 // wrong (takes time for calculation)
                33 + 3         = 36 // correct

                9 = 9
                9 + 4 = 13
                13 + 20 = 33
                33 + 3 = 36
                36 + 10 = 46
                46 + 5 = 51
            */

            int n = nums.size();
            int count = 0;

            for (int i = 0; i < n; i++)
            {
                int sum = 0;
                for (int j = i; j < n; j++)
                {
                    sum += nums[j];
                    if (sum == k)
                    {
                        count++;
                    }
                }
            }

            return count;
        }
    };

    return 0;
}