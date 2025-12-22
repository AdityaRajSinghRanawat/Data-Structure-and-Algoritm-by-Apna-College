#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    /*
        Problem: 1 [leetcode]
        Two Sum
    */
    class Solution
    {
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            // Time Complexity: O(1)  or  O(n) [worst case]
            unordered_map<int, int> m; // hash map
            vector<int> ans;

            int n = nums.size();

            for (int i = 0; i < n; i++)
            {
                int first = nums[i];
                int second = target - first;

                /*
                    e.g.
                    nums = [2, 7, 11, 15]
                    target = 9
                    m = {}
                    v = {}

                    // i = 0
                    first = 2
                    second = target - first = 9 - 2 = 7

                    m.find(7) != m.end() ===> find 7 in m
                    but
                    m = {}

                    so this "if" do not run

                    then,
                    m[first] = i
                    i.e. add to m
                    {2, 0}
                    m = {{2, 0}}

                    // i = 1
                    first = 7
                    second = 9 - 7 = 2

                    m.find(2) != m.end() ==>  find 2 (key) in m
                    since,
                    m = {{2, 0}}
                    so execute "if"

                    ans = {1} (since, i = 1)
                    m[2] = m[key] = value = index of key = 0
                    ans = {1 , 0}
                */
                /*
                    In short we go though each element in array ans find its second

                    if second does not exist then add the first (value, index) in the "m" map

                    if you found the second from the "m" which significantly reduce the search time

                    then print the  first (current i (index)) and second (from premade m (value, index))
                */

                // true  => return iterator of value
                // false => return m.end()

                if (m.find(second) != m.end())
                { // O(1)
                    ans.push_back(i);
                    ans.push_back(m[second]);
                    break;
                }
                m[first] = i;
            }
            return ans;
        }
    };

    return 0;
}