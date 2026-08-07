#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 33 [leetcode]
        Search in Rotated Sorted Array
    */

    class Solution
    {
    public:
        int search(vector<int> &nums, int target)
        {
            int st = 0, end = nums.size() - 1;

            while (st <= end)
            {
                int mid = st + (end - st) / 2;

                // mid = target
                if (nums[mid] == target)
                {
                    return mid;
                }

                // right sorted
                if (nums[mid] < nums[end])
                {
                    if (nums[mid] < target && target <= nums[end])
                    {
                        st = mid + 1;
                    }
                    else
                    {
                        end = mid - 1;
                    }
                }
                // left sorted
                else
                {
                    if (nums[st] <= target && target < nums[mid])
                    {
                        end = mid - 1;
                    }
                    else
                    {
                        st = mid + 1;
                    }
                }
            }

            return -1;
        }
    };
    return 0;
}