#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] < target)
        {
            start = mid + 1; // 2nd half
        }
        else if (arr[mid] > target)
        {
            end = mid - 1; // 1st half
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

    // odd size array
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int tar1 = 3;
    cout << binarySearch(arr1, tar1) << endl;

    vector<int> arr2 = {1, 2, 3, 4, 5};
    int tar2 = 6;
    cout << binarySearch(arr2, tar2) << endl;

    // even size array
    vector<int> arr3 = {1, 2, 3, 4};
    int tar3 = 3;
    cout << binarySearch(arr3, tar3) << endl;

    vector<int> arr4 = {1, 2, 3, 4};
    int tar4 = 6;
    cout << binarySearch(arr4, tar4) << endl;

    return 0;
}