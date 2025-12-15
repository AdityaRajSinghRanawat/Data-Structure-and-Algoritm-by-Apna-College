#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 54 [leetcode]
        Spiral Matrix
    */

    class Solution
    {
    public:
        vector<int> spiralOrder(vector<vector<int>> &matrix)
        {
            int m = matrix.size(), n = matrix[0].size();
            int sRow = 0, eRow = m - 1, sCol = 0, eCol = n - 1;
            vector<int> arr;

            while (sRow <= eRow && sCol <= eCol)
            {
                // top
                for (int j = sCol; j <= eCol; j++)
                {
                    arr.push_back(matrix[sRow][j]);
                }
                // right
                for (int i = sRow + 1; i <= eRow; i++)
                {
                    arr.push_back(matrix[i][eCol]);
                }
                // bottom
                for (int j = eCol - 1; j >= sCol; j--)
                {
                    if (sRow == eRow)
                    {
                        break;
                    }
                    arr.push_back(matrix[eRow][j]);
                }
                // left
                for (int i = eRow - 1; i >= sRow + 1; i--)
                {
                    if (sCol == eCol)
                    {
                        break;
                    }
                    arr.push_back(matrix[i][sCol]);
                }
                sRow++, eRow--;
                sCol++, eCol--;
            }
            return arr;
        }
    };

    return 0;
}