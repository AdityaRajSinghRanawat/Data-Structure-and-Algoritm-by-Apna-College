#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 74 [leetcode]
        Search a 2D Matrix
    */

    class Solution
    {
    public:
        bool searchInRow(vector<vector<int>> &matrix, int target, int row)
        { // O(log(n))
            int n = matrix[0].size();
            int st = 0, end = n - 1;

            while (st <= end)
            {
                int mid = st + (end - st) / 2;

                if (target == matrix[row][st] || target == matrix[row][end] || target == matrix[row][mid])
                {
                    return true;
                }
                else if (target < matrix[row][mid])
                { // move left
                    end = mid - 1;
                }
                else if (target > matrix[row][mid])
                { //  move right
                    st = mid + 1;
                }
            }
            return false;
        }

        bool searchMatrix(vector<vector<int>> &matrix, int target)
        {
            // Binary Search on total rows
            int m = matrix.size(), n = matrix[0].size();

            int startRow = 0, endRow = m - 1;

            while (startRow <= endRow)
            { // O(log(m))
                int midRow = startRow + (endRow - startRow) / 2;

                if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
                { // row found
                    return searchInRow(matrix, target, midRow);
                }
                else if (target < matrix[midRow][0])
                { // move up
                    endRow = midRow - 1;
                }
                else if (target > matrix[midRow][n - 1])
                { // move down
                    startRow = midRow + 1;
                }
            }
            return false; // time complexity: log(m) + log(n) = log(m*n)
        }
    };

    return 0;
}