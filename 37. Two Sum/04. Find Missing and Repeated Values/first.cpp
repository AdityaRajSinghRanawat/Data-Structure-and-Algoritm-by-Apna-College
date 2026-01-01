#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    /*
        Problem: 2965 [leetcode]
        Find Missing and Repeated Values
    */
    class Solution
    {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
        {

            // Time Complexity: O(n^2)

            vector<int> ans;
            unordered_set<int> s;
            int n = grid.size();
            int a, b;

            // Sum of n numbers       = n/2 (2a + (n-1)d)
            // Sum of 1, 2, 3 to n    = n/2 (n+1)
            // Sum of 1, 2, 3 to n^2  = (n^2)/2 ((n^2)+1)

            /*
                Let "9" be repeating = a
                Let "5" be missing = b

                .         b              a
                .         |              |
                .         |              |
                .         v              v
                [1+2+3+4+(5)+6+7+8+9] + (9)
                .       ^
                .       |
                .       |
                .   expectedSum

                So if we subtract the "b" from this equation then we will get the
               actualSum

                expectedSum + a - b = actualSum

                so missing value "b" is:

                b = expectedSum + a - actualSum
            */

            int actualSum = 0, expectedSum = 0;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {

                    actualSum += grid[i][j];

                    // found the repeating value
                    if (s.find(grid[i][j]) != s.end())
                    {
                        a = grid[i][j];
                        ans.push_back(grid[i][j]);
                    }
                    s.insert(grid[i][j]);
                }
            }
            expectedSum = ((n * n) * ((n * n) + 1)) / 2;
            b = expectedSum + a - actualSum;
            ans.push_back(b);

            return ans;
        }
    };

    return 0;
}