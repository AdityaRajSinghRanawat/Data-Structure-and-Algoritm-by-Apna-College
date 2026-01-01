#include <iostream>
#include <vector>
#include <unordered_set>
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

            // Time Complexity: O(n)

            unordered_set<int> s;

            for (int val : nums)
            {
                if (s.find(val) != s.end())
                {
                    return val;
                }
                s.insert(val);
            }

            return -1;
        }
    };

    return 0;
}