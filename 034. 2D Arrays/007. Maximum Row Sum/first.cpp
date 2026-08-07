#include <iostream>
#include <climits>

using namespace std;

int maxRowSum(int arr[][4], int rows, int cols)
{
    int maxRowSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int currRowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            currRowSum += arr[i][j];
        }
        maxRowSum = max(maxRowSum, currRowSum);
    }
    return maxRowSum;
}

int main()
{
    int arr[3][4] = {{10, 20, 30, 40},
                     {50, 60, 70, 80},
                     {90, 100, 110, 120}};

    int rows = 3;
    int cols = 4;

    cout << maxRowSum(arr, rows, cols) << endl;
    return 0;
}