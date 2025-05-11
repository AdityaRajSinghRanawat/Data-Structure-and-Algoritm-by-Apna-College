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
        [n/2] =  these "[]" means floor, n/2 times

        i.e.
        8 / 2 = 4
        9 / 2 = 4.5 => 4 (floor)
        i.e. if n = 9 then majority element should exist more than 4 times

        i.e. In more than half of the array that element should be present.
    */

    vector<int> nums = {2, 2, 1, 1, 1};
    int n = nums.size();

    for (int val : nums)
    {
        int freq = 0;

        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            cout << val << endl;
            return 1;
        }
    }

    // Time Complexity = O(n^2)

    return 0;
}