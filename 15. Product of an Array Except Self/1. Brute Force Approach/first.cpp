#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 238 [leetcode]
        Product of Array Except Self
    */

    /*
        nums = [1,2,3,4]
        ans = [24,12,8,6]

        we might think that we can find product of nums array
        and the divide the nums[i] from the product
        But,
        We are not allowed to use division
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
                int prod = 1;
                for (int j = 0; j < n; j++)
                {
                    if (i != j)
                    {
                        prod *= nums[j];
                    }
                }
                ans[i] = prod;
            }
            return ans;
        }
    };

    return 0;
}