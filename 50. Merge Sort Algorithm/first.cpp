#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) // O(n)
{
    vector<int> temp;
    int i = st;      // left half start index
    int j = mid + 1; // right half start index

    // store in temp array
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j]) // change this to ">=" for descending order
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }

    // now copy temp to original array
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[st + idx] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        // break array into small problems
        mergeSort(arr, st, mid);      // left half
        mergeSort(arr, mid + 1, end); // right half

        // merge them to form a sorted array
        merge(arr, st, mid, end); // O(n)
    }
}

int main()
{
    // Time Complexity:
    /*
        TC = total calls * work done in each call

        let say we had done "k" calls on the "n" sized array
        then,
        at each level we are dividing the array into half

        n            |
        n/2          |
        n/4          |
        .            |   k
        .            |
        .            |
        1 = n/(2^k)  v

        total calls = k

        1 = n/(2^k)
        2^k = n
        log(2^k) = log(n)
        k * log2(2) = log2(n)
        k = log2(n)

        k = log(n)

        in mergeSort function,
        each work is constant except the merge function, which is O(n)

        therefore,
        TC = log(n) * n
        TC = O(n log n)
    */

    // Space Complexity:
    /*
        SC = Depth of Recursion Tree
        SC = O(n)

        or we can say,
        we used temp array of size "n"
        SC = O(n)
    */

    vector<int> arr = {12, 31, 35, 8, 32, 17};

    cout << "Original Array: ";
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}