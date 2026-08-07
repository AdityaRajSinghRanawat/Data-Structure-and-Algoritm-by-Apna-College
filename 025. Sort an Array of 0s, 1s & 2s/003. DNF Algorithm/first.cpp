#include <iostream>
#include <vector>
using namespace std;

int main()
{
    class Solution
    {
    public:
        void sortColors(vector<int> &nums)
        {
            // Dutch National Flag Algorithm
            /*
                n : size of array
                low, mid, high : 3 pointers

                0 ----> low-1   low ---> mid - 1   mid ----> high   high + 1 -----> n-1
                0000000000000   1111111111111111     unsorted       2222222222222222222
            */

            int low = 0, mid = 0, high = nums.size() - 1;

            while (mid <= high){
                if(nums[mid] == 0){
                    swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                }
                else if (nums[mid] == 1){
                    mid++;
                }
                else {
                    swap(nums[mid], nums[high]);
                    high--;
                }
            }
        }
    };

    /*
        Speciality: Single Pass Algorithm (only one time traversal of the array) 

        Time Complexity: O(n)
        Space Complexity: O(1)
    */
    return 0;
}