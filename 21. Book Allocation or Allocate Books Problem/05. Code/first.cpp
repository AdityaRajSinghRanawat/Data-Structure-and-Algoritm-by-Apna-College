#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages) // O(n)
{
    int stu = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {

        // edge case - if single book has more pages than maxAllowedPages
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }

        // algorithm
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        { // need new student
            stu++;
            pages = arr[i];
        }

    }
    return stu > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m)
{

    // edge case - if students are more than books
    if (m > n)
    {
        return -1;
    }

    // find the binary line
    int sum = 0;

    for (int i = 0; i < n; i++) // O(n)
    {
        sum += arr[i];
    }

    // binary search
    int st = 0, end = sum;
    int ans = -1;

    while (st <= end) // O(logN * n)  - this n is from isValid function loop 
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid))
        { // left
            end = mid - 1;
            ans = mid;
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
    vector<int> arr = {2, 1, 3, 4};

    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;

    /*
        TIME COMPLEXITY: O(log n + n)
        SPACE COMPLEXITY: O(1)
    */
    return 0;
}