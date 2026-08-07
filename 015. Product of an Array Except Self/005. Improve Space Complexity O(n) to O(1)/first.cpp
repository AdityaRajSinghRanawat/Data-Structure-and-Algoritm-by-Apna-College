#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        We are storing and then mutiplying prefix and suffix
        We can just directly multiply them in ans array
    */

    /*
        nums       = [10, 20, 30, 40]
        ans        = [1, 1, 1, 1]
        prefix ans = [1, 10, 200, 6000]
        suffix ans = [24000, 1200, 8000, 6000]


        with following we got:-
        nums & ans    = prefix
        nums & prefix = suffix {answer}
    */

    class Solution
    {
    public:
        vector<int> productExceptSelf(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> ans(n, 1);

            // prefix
            for (int i = 1; i < n; i++)
            {
                ans[i] = ans[i - 1] * nums[i - 1];
            }

            // suffix
            int suffix = 1;
            for (int i = n - 2; i >= 0; i--)
            {
                suffix *= nums[i + 1];
                ans[i] = ans[i] * suffix;
            }

            return ans;
        }
    };

    return 0;
}