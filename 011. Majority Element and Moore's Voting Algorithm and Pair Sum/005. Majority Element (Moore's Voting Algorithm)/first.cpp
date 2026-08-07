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
        Moore's Voting Algorithm:-
        For majority element (> n/2), if we traverse the array form start
        then the majority element will be the one with most frequency/occurance.

        - imagine frequency as power
        - frequency = 0, answer = 0
        - same element => frequency++
        - different element => frequency--

        - i.e. if minor element event try to freq-- of majority element
        then also the majority element will be left with most power
        i.e. > 0
    */

    vector<int> nums = {2, 2, 1, 1, 1};
    int n = nums.size();

    int freq = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << ans << endl;
    return 0;
}