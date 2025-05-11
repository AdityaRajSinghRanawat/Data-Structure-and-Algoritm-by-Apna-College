#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 136 [leetcode] 
        Single Number
    */

    /*
        vector<int>& nums
        we use & nums because in our contianer(vector), 
        whenever we pass the vector to a function,
        we do passed by reference, not by value.
        i.e. the chances will be made to orignal vector.
    */
    

    /*
        If the dublicate values cancel each other, 
        then the remaining value will be the answer.

        XOR Operator (same number = 0):-
        0 ^ 0 = 0
        1 ^ 1 = 0
        0 ^ 1 = 1
        1 ^ 0 = 1




        e.g. 
        2 = 10 [binary]
        2 = 10 [binary]

        10 ^ 10 
        1 0
        1 0
        ----
        0 0  = 0 [binary]




        e.g. 
        6 = 110 [binary]
        6 = 110 [binary]

        110 ^ 110 
        1 1 0
        1 1 0
        -----
        0 0 0  = 0 [binary]



        e.g.
        4 ^ 1 ^ 2 ^ 1 ^ 2  = 4 ^ 0 = 4 (100) [binary]


        important point:
        n ^ 0 = n (different)
        n ^ n = 0 (same)
    */


    class Solution {
        public:
            int singleNumber(vector<int>& nums) {
                int ans = 0;
        
                for(int values: nums){
                    ans = ans ^ values;
                }
                return ans;
            }
        };

    return 0;
}