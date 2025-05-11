#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n-1;

    // i = j means we traversed all the elemnts
    while(i < j){
        int pairSum = nums[i] + nums[j];

        if(pairSum > target){
            j--;
        }
        else if(pairSum <target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main()
{
    /*
        Since we know that the array is sorted so

        Any information which is give has some purpose
        - for edge/corner case
        - for optimization

        So we can use "Two Pointer Approach"
        since numbers are:-
        smaller = start
        greater = end

        i = start
        j = end

        1. pairSum > target => j-- 
        2. pairSum < target => i++ 
        3. pairSum = target => ans(i, j) 
    */

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}
