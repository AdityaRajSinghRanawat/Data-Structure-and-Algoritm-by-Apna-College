#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 240 [leetcode]
        Search a 2D Matrix II
    */

    class Solution
    {
    public:
        bool searchMatrix(vector<vector<int>> &matrix, int target)
        {
            int m = matrix.size(), n = matrix[0].size();
            int row = 0, col = n - 1;

            while (col >= 0 && row <= m - 1)
            { // (row < m) ====> (row <= m - 1)
                if (target == matrix[row][col])
                {
                    return true;
                }
                else if (target < matrix[row][col])
                { // left
                    col--;
                }
                else if (target > matrix[row][col])
                { // down
                    row++;
                }
            }
            return false;
        }
    };

    return 0;
}