#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(vector<vector<int>> &mat, vector<string> &ans, string path, int row, int col, vector<vector<bool>> &visited)
{
    int n = mat.size();
    if (row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || visited[row][col] == true)
    {
        return;
    }

    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // mark visited
    visited[row][col] = true;

    // down
    helper(mat, ans, path + "D", row + 1, col, visited);
    // up
    helper(mat, ans, path + "U", row - 1, col, visited);
    // right
    helper(mat, ans, path + "R", row, col + 1, visited);
    // left
    helper(mat, ans, path + "L", row, col - 1, visited);

    // mark unvisited for backtracking
    visited[row][col] = false;
}

// complete this function
vector<string> findPath(vector<vector<int>> &mat)
{
    int n = mat.size();
    vector<string> ans;
    string path = "";

    // visited matrix
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    helper(mat, ans, path, 0, 0, visited);

    return ans;
}

int main()
{
    /*
        Time Complexity:

        we have matrix of size = n^2
        we have options = 4

        TC = O(4^(n^2))
    */

    /*
        Space Complexity:

        space for visited matrix = n^2
        we have recursion stack of height for full matrix traversal = n^2
        TC = O(n^2 + n^2)
        TC = O(n^2)
    */

    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans = findPath(mat);

    for (string path : ans)
    {
        cout << path << endl;
    }

    return 0;
}