#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // Brute Force Approach: The initial approach you come up with

    // we need to give subarray whose sum is maximum
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT_MIN;
    for(int st = 0; st < n; st++){
        int currentSum = 0;
        for(int end = st; end < n; end++){
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;
}