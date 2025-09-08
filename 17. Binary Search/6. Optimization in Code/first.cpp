#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;

    /*
        This might cause TLE:-
        mid = (start + end) / 2

        Use this instead:-
        mid = start + (end - start) / 2
    */
    while (start <= end)
    {
        int mid = start + ( end - start ) / 2;

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int tar1 = 3;
    cout << binarySearch(arr1, tar1) << endl;

    vector<int> arr2 = {1, 2, 3, 4, 5};
    int tar2 = 6;
    cout << binarySearch(arr2, tar2) << endl;

    return 0;
}