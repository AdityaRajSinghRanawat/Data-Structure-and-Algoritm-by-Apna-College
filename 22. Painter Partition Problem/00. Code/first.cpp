#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){ // O(n)
    int painter = 1, time = 0;

    for(int i = 0; i < n; i++){
        if(time + arr[i] <= maxAllowedTime){ // need same painter
            time += arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }

    return painter <= m; // true/false 
}

int minTimeToPaint(vector<int> &arr, int n, int m) // O(log(range) * n)
{
    int sum = 0, maxVal = INT_MIN;

    // find the sum
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];                // find binary line(minimum)
        maxVal = max(maxVal, arr[i]); // find binary line(maximum)
    }

    // create binary search line
    int st = maxVal, end = sum;
    int ans = -1;

    while (st <= end) 
    {
        int mid = st + (end - st) / 2;

        // check if mid is valid
        if (isPossible(arr, n, m, mid)) // mid = maxAllowedTime
        { // left
            ans = mid;
            end = mid - 1;
        }
        else
        { // right
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size();
    int m = 2; // painters

    cout << minTimeToPaint(arr, n, m) << endl; // O(log(range) * n)
    return 0;
}