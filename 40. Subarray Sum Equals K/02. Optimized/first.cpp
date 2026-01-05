#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    /*
        Problem: 560 [leetcode]
        Subarray Sum Equals K
    */
    class Solution
    {
    public:
        int subarraySum(vector<int> &nums, int k)
        {
            // Time Complexity:  O(n)
            // Space Complexity: O(n)

            // Prefix Sum Approach:

            // CONCEPT 1:
            /*
                [ 9 | 4 | 20 | 3 | 10 | 5 ]
                . i = j
                . i ------>j
                . i --------------->j

                PS = Prefix Sum

                [ 1 | 2 | 3 | 4 | 5 ]
                .       ^       ^
                .       |       |
                .------>i=1     |
                .-------------->j=3
                .       |-------|
                .    (j-i = 10-3 = 7)

                PS[i] = 3
                PS[j] = 10
                PS[j] - PS[i] = 7

                i.e. start with i+1
                sumArraySum(i+1, j) = PS[j] - PS[i]

                let, i ---> i-1
                subarraySum(i, j) = PS[j] - PS[i-1]

                also,
                PS[j] - PS[i-1] = target
            */

            // CONCEPT 2:
            /*
                target = 33
                [ 9 | 4 | 20 | 3 | 10 | 5 ]

                let, target = k = 33

                k = PS[j] - PS[i-1]
                then,
                PS[i-1] = k - PS[j]

                e.g.
                Array:
                [ 9 | 4 | 20 | 3 | 10 | 5 ]

                PS Array:
                [ 9 | 13 | 33 | 36 | 46 | 51 ]
                .                     ^
                .                     |
                .                     |
                .------------------->j=4

                PS[i-1] = PS[j] - k
                PS[i-1] = 46 - 33 = 13
                PS[i-1] = 13

                index of "13" is "1"
                i - 1 = 1
                i = 2

                (i, j) === (2, 4)

                [ 9 | 4 | 20 | 3 | 10 | 5 ]
                . 0   1    2   3    4   5
                .       |-------------|
                .    subArr = (i, j) = 33
            */

            // CASE 1:
            /*
                target = 33

                Array:
                [ 9 | 4  | 20 | 3  | 10 | 5  ]
                .           ^
                .           |
                .           |
                .--------->j=2

                PS Array:
                [ 9 | 13 | 33 | 36 | 46 | 51 ]
                .           ^
                .           |
                .           |
                .--------->j=2

                i.e. when PS[j] == target
                then, it always start with i = 0
                (i, j) === (0, j)

                then,
                count  = +1
            */

            // CASE 2:
            /*
                target = 33

                Array:
                [ 9 | 4  | 0  | 20 | 3  | 10 | 5  ]
                .          ^     ^         ^
                .          |     |         |
                .          |     |         |
                .--------->j=2   |         |
                .-------------->j=3        |
                .------------------------>j=5

                PS Array:
                [ 9 | 13 | 13 | 33 | 36 | 46 | 51 ]
                .   |------------------------|
                .        |-------------------|

                When, j = 5
                PS[i-1] = PS[j] - k
                PS[i-1] = 46 - 33 = 13
                PS[i-1] = 13

                but, PS[i-1] = 13 exist at index "1" and "2"

                and both are valid answer
                (i, j) === (1, j) and (2, j)

                then,
                count = +2
            */

            // to solve CASE 2:
            /*
                We will store the index of PS[i-1] in a map

                Time Complexity:

                map           -> O(log(n))
                unordered_map -> O(1)

                so we will use unordered_map

                unordered_map<int, int>  // <PS, frequency>

                table:
                9  |  1
                13 |  1 x  =>  2 (updated frequency)

                if(freq == 1) => count +1
                if(freq == 2) => count +2
            */

            // Dry Run:
            /*
                k = 20

                Array:
                [9, 4, 0, 0, 0, 20, 3, 10, 5]

                PS Array:
                [9, 13, 13, 13, 13, 33, 36, 46, 51]

                // Step 1:
                j = 0 | prefixSum[j] = 9

                prefixSum[j] == k
                ==> 9 != 20

                val = prefixSum[j] - k
                ==> 9 - 20 = -11 // not in map

                update map:-
                map: {}
                prefixSum[j] = 9 // not in map
                ==> {(9:1)}

                // Step 2:
                j = 1 | prefixSum[j] = 13
                13 != 20
                13-20 = -7 // not found
                map: {(9:1), (13:1)}

                // Step 3:
                j = 2 | prefixSum[j] = 13
                13 != 20
                13-20 = -7 // not found
                map: {(9:1), (13:2)}

                // Step 4:
                j = 3 | prefixSum[j] = 13
                13 != 20
                13-20 = -7 // not found
                map: {(9:1), (13:3)}

                // Step 5:
                j = 4 | prefixSum[j] = 13
                13 != 20
                13-20 = -7 // not found
                map: {(9:1), (13:4)}

                // Step 6:
                j = 5 | prefixSum[j] = 33
                33 == 20
                33 - 20 = 13 // found
                map: {(9:1), (13:4)}
                count = +4

            */
            int n = nums.size();
            vector<int> prefixSum(n, 0);
            int count = 0;

            // calculate the prefix sum
            prefixSum[0] = nums[0];
            for (int i = 1; i < n; i++)
            {
                prefixSum[i] = prefixSum[i - 1] + nums[i];
            }

            // calculate the count
            unordered_map<int, int> m; // PS, freq
            for (int j = 0; j < n; j++)
            {
                if (prefixSum[j] == k)
                {
                    count++;
                }

                int val = prefixSum[j] - k; // PS[i-1]

                // do not get confused with find(prefixSum[j]) vs find(val)
                if (m.find(val) != m.end()) // found
                {
                    count += m[val]; // store the count as frequency
                }

                // making the frequency map
                if (m.find(prefixSum[j]) == m.end()) // not found
                {
                    m[prefixSum[j]] = 0;
                }
                // always set as min = 1 (if already exist)
                // otherwise, it will always increase the count
                m[prefixSum[j]]++;
            }

            return count;
        }
    };
}