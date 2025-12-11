#include <iostream>
#include <climits>

using namespace std;

int maxColSum(int arr[][4], int rows, int cols)
{
    int maxColSum = INT_MIN;
    for (int i = 0; i < cols; i++)
    {
        int currColSum = 0;
        for (int j = 0; j < rows; j++)
        {
            currColSum += arr[j][i];
        }
        maxColSum = max(maxColSum, currColSum);
    }
    return maxColSum;
}

int main()
{
    int arr[3][4] = {{10, 20, 30, 40},
                     {50, 60, 70, 80},
                     {90, 100, 110, 120}};

    int rows = 3;
    int cols = 4;

    cout << maxColSum(arr, rows, cols) << endl;
    return 0;
}