#include <iostream>
using namespace std;

int diagonalSum(int arr[][3], int n)
{
    // Time Complexity: O(n)

    // pd: j = i
    // sd: j = n - 1 - i

    // replace j with i
    // pd: i = i
    // sd: i = n - 1 - i
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];

        // to remove double count of middle term in
        // n = odd (3)

        // i = 0 => 3 - 1 - 0 = 2 => 0 != 2 => sum += arr[0][2]
        // i = 1 => 3 - 1 - 1 = 1 => 1 != 1 => false => Not executed (sum += arr[1][1])
        // i = 2 => 3 - 1 - 2 = 0 => 2 != 0 => sum += arr[2][0]

        // i.e. it always run this for every row (since i is row)
        // but dont run this on middle term common term
        if (i != n - 1 - i)
        {
            sum += arr[i][n - 1 - i];
        }
    }
    return sum;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int n = 3;

    cout << diagonalSum(arr, n) << endl;
    return 0;
}