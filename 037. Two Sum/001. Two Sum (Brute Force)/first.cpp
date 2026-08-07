#include <iostream>
#include <vector>
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
            // Time Complexity: O(n^2)
            vector<int> v;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                int first = nums[i];
                for (int j = i + 1; j < n; j++)
                {
                    int second = nums[j];
                    int sum = first + second;
                    if (sum == target)
                    {
                        v.push_back(i);
                        v.push_back(j);
                        return v;
                    }
                }
            }
            return v;
        }
    };

    return 0;
}