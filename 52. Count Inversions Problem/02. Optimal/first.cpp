#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int merge(vector<int> &arr, int st, int mid, int end) // O(n)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    int invCount = 0;

    // count inversions and make a sorted temp array
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else if (arr[i] > arr[j])
        {
            temp.push_back(arr[j++]);
            invCount += (mid - i + 1); // this difference contain all elements greater than arr[j]
        }
    }

    // fill remaining elements
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }

    // copy temp to original array
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[st + idx] = temp[idx];
    }

    return invCount;
}

int mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        // break array into small problems
        int leftInvCount = mergeSort(arr, st, mid);
        int rightInvCount = mergeSort(arr, mid + 1, end);

        // merge them to form a sorted array and count inversions
        int invCount = merge(arr, st, mid, end);

        return leftInvCount + rightInvCount + invCount;
    }

    return 0;
}

int main()
{
    // Time Complexity  = [Merge Sort Time Complexity]  = O(n log(n))
    // Space Complexity = [Merge Sort Space Complexity] = O(n)

    vector<int> arr = {6, 3, 5, 2, 7};

    cout << "Number of Inversions: " << mergeSort(arr, 0, arr.size() - 1);

    return 0;
}