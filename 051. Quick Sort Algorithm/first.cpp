#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int> &arr, int st, int end)
{
    int idx = st - 1, pivot = arr[end]; // pivot is last element

    // end (pivot) is not included
    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot) // change this to ">=" for descending order
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    // place pivot at correct postion (majorly in middle)
    idx++;
    swap(arr[idx], arr[end]);

    return idx;
}

void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pivIdx = partition(arr, st, end);

        // break array into small problems
        // Note:- do not include pivot in either half

        // eg. [12 | 31 | (35) | 8 | 32 | 17]
        //                 ^
        //                 |
        //            pivot index

        quickSort(arr, st, pivIdx - 1);  // left half
        quickSort(arr, pivIdx + 1, end); // right half
    }
}

int main()
{
    // Time Complexity:

    /*
        Average Case:
        O(n logn)

        Worst Case:
        O(n^2)
        [when array is already sorted or pivot is smallest/largest element repeatedly]

        e.g.
        [ 1 | 2 | 3 | 4 | 5 |(6)]  --> n   operations
        [ 1 | 2 | 3 | 4 |(5)]      --> n-1 operations
        [ 1 | 2 | 3 |(4)]          --> n-2 operations
        .
        .
        [(1)]                       --> 1  operation

        (n) + (n-1) + (n-2) + ... + 1

        or
        1 + 2 + 3 + ... + (n-1) + n

        i.e. its an Arithmetic Progression (AP) series
        sum = n(n+1)/2

        therefore,
        TC = n(n+1)/2
        TC = n(n)/2
        TC = n*n
        TC = O(n^2)

    */
    // Space Complexity:
    /*
        Auxiliary Space => extra memory used by the algorithm (excluding input)
        Total Space     => auxiliary space + input space

        SC = Depth of Recursion Tree
        SC = O(log n)   [Average Case]
        SC = O(n)       [Worst Case]

        but we have not used extra space so,
        simply in general we can say,
        SC = O(1)

        in merge sort we used extra temp array of size "n"
        Merge Sort SC = O(n)
        Quick Sort SC = O(1)

        thats why we use Quick Sort, for large data sets, where spce matters
    */

    vector<int> arr = {12, 31, 35, 8, 32, 17};

    cout << "Original Array: ";
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}