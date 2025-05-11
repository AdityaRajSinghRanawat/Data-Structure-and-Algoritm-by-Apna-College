#include <iostream>
#include <vector>
#include <algorithm> // for sort function
using namespace std;

int main()
{
    /*
        Problem: 169 [leetcode]
        Majority Element
    */

    /*
        Better approach using sort:-
        - Sort the array and then initialize the frequency as 1
        - When ever change number/digit then reset frequency to 1
        - If frequency >= n/2 then return the number/digit as answer
    */

    vector<int> nums = {2, 2, 1, 1, 1};
    int n = nums.size();

    // #include <algorithm> for sort function
    sort(nums.begin(), nums.end());
    
    int freq = 1;
    int ans = nums[0]; // suppose the initial number is answer

   
    /*
        we used for loop instead of for-each loop because 
        we need to check the previous number as well
        at index 0 there is no index -1 so we need to start from index 1
    */
    for (int i = 1; i < n; i++) 
    {
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }

        if(freq >= n/2){
            cout << ans << endl; 
            return 1;
        }
    }
    

    // Time Complexity = O(n logn) 

    return 0;
}