#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{ // O(n^2)
    // dividing array in sorted and unsorted
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        // find smallest
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

void reverseSelectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

int main()
{
    int n = 5;
    vector<int> arr = {4, 1, 5, 2, 3};

    selectionSort(arr, n); // O(n^2)

    for (int x : arr)
    {
        cout << x << " ";
    };

    cout << endl;

    int n2 = 5;
    vector<int> arr2 = {4, 1, 5, 2, 3};

    reverseSelectionSort(arr2, n2); // O(n^2)

    for (int x : arr2)
    {
        cout << x << " ";
    };

    return 0;
}