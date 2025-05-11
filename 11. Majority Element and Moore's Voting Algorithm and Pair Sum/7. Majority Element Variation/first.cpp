#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 169 [leetcode]
        Majority Element
    */

    /*
        Variation:

        In previous  problem it was definate that the array has majority element.

        But what if array = {1, 2, 3, 4}
        i.e no majority element is present.

        Then we will retur -1
    */
    vector<int> nums = {2, 2, 1, 1, 1};
    int n = nums.size();

    int freq = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    int count = 0;
    for (int val : nums)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
 

    return 0;
}