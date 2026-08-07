#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Prefix:-

        (from front)
        [10, 20, 30, 40]
        -->| 10
        ------>| 10 * 20
        ----------->| 10 * 20 * 30


        10 : prefix[0] = 1 {let}
        20 : prefix[1] = prefix[0] * nums[0] = 1 * 10 = 10
        30 : prefix[2] = prefix[1] * nums[1] = 10 * 20 = 200
        40 : prefix[3] = prefix[2] * nums[2]= 200 * 30 = 6000

        prefix = [1, 10, 200, 6000]
    */

    /*
        Suffix:-

        (from back)
        [10, 20, 30, 40]
        .           |<--- 40
        .       |<--- 30 * 40
        .   |<--- 20 * 30 * 40


        10 : suffix[n-1] = 1 {let}
        20 : suffix[n-2] = suffix[n-1] * nums[n-1] = 1 * 40 = 40
        30 : suffix[n-3] = suffix[n-2] * nums[n-2] = 40 * 30 = 1200
        40 : suffix[n-4] = suffix[n-3] * nums[n-3] = 1200 * 20 = 24000

        suffix = [24000, 1200, 40, 1]
    */

    /*
        nums   = [10, 20, 30, 40]
        prefix = [1, 10, 200, 6000]
        suffix = [24000, 1200, 40, 1]

        product = prefix[i] * suffix[i]
        product = [24000, 1200, 8000, 6000]
    */

    class Solution
    {
    public:
        vector<int> productExceptSelf(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> ans(n, 1);
            vector<int> prefix(n, 1);
            vector<int> suffix(n, 1);

            // prefix
            for (int i = 1; i < n; i++)
            {
                prefix[i] = prefix[i - 1] * nums[i - 1];
            }

            // suffix
            for (int i = n - 2; i >= 0; i--)
            {
                suffix[i] = suffix[i + 1] * nums[i + 1];
            }

            // answer/product
            for (int i = 0; i < n; i++)
            {
                ans[i] = prefix[i] * suffix[i];
            }

            return ans;
        }
    };

    return 0;
}