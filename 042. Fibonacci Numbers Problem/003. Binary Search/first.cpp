#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
        Problem: 704 [leetcode]
        Binary Search
    */
    class Solution
    {
    public:
        // helper function
        int recursiveBinarySearch(vector<int> &nums, int target, int st, int end)
        {
            int mid = st + (end - st) / 2;

            // what if nums = []
            // st = 0 and end = nums.size() - 1 = 0 - 1 = -1

            // what if nums = [2]
            // st = 0 and end = nums.size() - 1 = 1 - 1 = 0
            if (st <= end)
            {
                if (nums[mid] == target)
                {
                    return mid;
                }
                else if (nums[mid] < target)
                { // right
                    return recursiveBinarySearch(nums, target, mid + 1, end);
                }
                else if (nums[mid] > target)
                { // left
                    return recursiveBinarySearch(nums, target, st, mid - 1);
                }
            }

            return -1;
        }

        int search(vector<int> &nums, int target)
        {
            /*
                Time Complexity:

                [            |             n
                [     |      ]            n/2
                [  |  ]                   n/4
                .    :
                .    :
                .    :
                .    :
                []                         1


                let n = 6

                .     f(6)
                .      |
                .      v
                .     f(3)
                .      |
                .      v
                .     f(1)


                .   n
                .  n/(2)^1
                .  n/(2)^2
                .  n/(2)^3
                .    :
                .    :
                .    :
                .    1  = n/(2)^k

                where, k is kth call

                n/(2)^k = 1
                n = 2^k
                log2(n) = log2(2^k)
                log2(n) = k * log2(2)
                log2(n) = k

                TC = total number of calls * work done in each call
                TC = log2(n) * constant
                TC = log2(n) * O(1)
                TC = O(log2(n))
                //or
                TC = O(logn)
            */

            /*
                Space Complexity:

                SC = Depth of Recursion Tree * Memory in each call
                SC = log2(n) * constant
                SC = log2(n) * O(1)
                SC = O(log2(n))
                //or
                SC = O(logn)
            */

            int st = 0;
            int end = nums.size() - 1;

            return recursiveBinarySearch(nums, target, st, end);
        }
    };

    return 0;
}