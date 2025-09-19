#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{ // O(n^2)
    for (int i = 0; i < n - 1; i++)
    { // 1*n
        for (int j = 0; j < n - i - 1; j++)
        { // n*n
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void optimizedBubbleSort(vector<int> &arr, int n)
{ // O(n)
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwapped = false;
        // moving the largest element to the end
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
        { // already sorted
            break;
        }
    }
}

void reverseOptimizedBubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            { // comparing: changed '>' to '<'
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
        { // already sorted
            break;
        }
    }
}

int main()
{
    int n = 5;
    vector<int> arr = {4, 1, 5, 2, 3};

    bubbleSort(arr, n); // O(n^2)

    for (int x : arr)
    {
        cout << x << " ";
    };
    cout << endl;

    /*
        what if our array is already sorted?

        eg: arr = {1, 2, 3, 4, 5}
        then also the time complexity will be O(n^2)
        since we are running two loops
        but we can optimize it to O(n)
        by using a flag variable
    */

    int n2 = 5;
    vector<int> arr2 = {4, 1, 5, 2, 3};

    optimizedBubbleSort(arr2, n2); // O(n)

    for (auto x : arr2)
    {
        cout << x << " ";
    };

    cout << endl;

    int n3 = 5;
    vector<int> arr3 = {4, 1, 5, 2, 3};

    reverseOptimizedBubbleSort(arr3, n3); // O(n)

    for (auto x : arr3)
    {
        cout << x << " ";
    };

    return 0;
}