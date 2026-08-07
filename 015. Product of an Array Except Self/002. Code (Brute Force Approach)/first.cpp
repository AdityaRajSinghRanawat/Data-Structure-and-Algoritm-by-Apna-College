#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        We can further optimze by removing the prod variable
    */

    class Solution
    {
    public:
        vector<int> productExceptSelf(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> ans(n, 1);

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i != j)
                    {
                        ans[i] *= nums[j];
                    }
                }
            }
            return ans;
        }
    };

    /*
        Time Complexity: O(n^2)
        Space Complexity: O(1) [excluding ans array as per question]

        n is till 10^5 
        n^2 is 10^10

        10^10 >>> 10^8 operation [TLE will occure]
    */

    return 0;
}