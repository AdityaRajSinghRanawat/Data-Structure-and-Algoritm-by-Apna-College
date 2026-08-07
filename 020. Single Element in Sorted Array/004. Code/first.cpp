#include <iostream>
#include <vector>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int singleNonDuplicate(vector<int> &nums)
        {
            int st = 0, end = nums.size();
            int n = nums.size();

            // single element edge case
            if (n == 1)
            {
                return nums[0];
            }

            while (st <= end)
            {
                int mid = st + (end - st) / 2;

                // edge case
                if (mid == 0 && (nums[0] != nums[1]))
                {
                    return nums[0];
                }
                if (mid == n - 1 && (nums[n - 1] != nums[n - 2]))
                {
                    return nums[n - 1];
                }

                // check inside the array
                if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
                {
                    return nums[mid];
                }
                else if (mid % 2 == 0)
                { // even
                    if (nums[mid - 1] == nums[mid])
                    { // left
                        end = mid - 1;
                    }
                    else
                    { // right
                        st = mid + 1;
                    }
                }
                else
                { // odd
                    if (nums[mid - 1] == nums[mid])
                    { // left
                        st = mid + 1;
                    }
                    else
                    { // right
                        end = mid - 1;
                    }
                }
            }
            return -1;
        }
    };
    return 0;
}