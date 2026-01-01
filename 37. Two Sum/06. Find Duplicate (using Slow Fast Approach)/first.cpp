#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    /*
        Problem: 287 [leetcode]
        Find the Duplicate Number
    */
    class Solution
    {
    public:
        int findDuplicate(vector<int> &nums)
        {

            // Time Complexity  : O(n)
            // Space Complexity : O(1)

            // Step 1: slow = +1, fast = +2
            // Step 2: If match then put slow to start slow = nums[0]
            // Step 3: slow = +1, fast = +1
            // Step 4: slow = fast = nums[i] = ans

            int slow = nums[0], fast = nums[0];

            // used the do to move pointers since slow = fast at start
            do
            {
                slow = nums[slow];       // +1
                fast = nums[nums[fast]]; // +2
            } while (slow != fast);

            slow = nums[0];

            // NO "do-while" because what if fast was at nums[0]
            // after slow set to nums[0] they both become same
            // we must check it before "do" thats why we use "while"
            while (slow != fast)
            {
                slow = nums[slow]; // +1
                fast = nums[fast]; // +2
            };

            return slow;
        }
    };
    return 0;
}