#include <iostream>
using namespace std;

int diagonalSum(int arr[][3], int n)
{
    int sum = 0;
    // Time Complexity: O(n * n) = O(n^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            // "if" vs "else if"
            // we are reading the 1 row at a time
            // for n = odd (3), when it assign middle value to sum
            // then "else if" will not work
            // but in case of the "if", it will count the middle value 2 times
            else if (j == n - 1 - i)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    /*
        0,0    0,1    0,2 <---  (0, n-1)
        1,0    1,1    1,2
        2,0    2,1    2,2
    */

    // Primary Diagonal => (0,0) + (1,1) + (2,2)
    // i = j

    // Secondary Diagonal => (0,2) + (1,1) + (2,0)
    // row pattern is same but coulmn pattern changes
    // let "i" be something which makes up the pattern
    // secondary diagonal pattern is (n-1) - (i)
    // j = n - 1 - i

    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    // we find diagonal sum only for square matrix
    int n = 3;

    cout << diagonalSum(arr, n) << endl;
    return 0;
}