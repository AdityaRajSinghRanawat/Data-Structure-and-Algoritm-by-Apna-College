#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{ // O(n^2)
    // i < n because we want to traverse till the last element
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void reverseInsertionSort(vector<int> &arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] < curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    int n = 5;
    vector<int> arr = {4, 1, 5, 2, 3};

    insertionSort(arr, n); // O(n^2)

    for (int x : arr)
    {
        cout << x << " ";
    };

    cout << endl;

    int n2 = 5;
    vector<int> arr2 = {4, 1, 5, 2, 3};

    reverseInsertionSort(arr2, n2); // O(n^2)

    for (int x : arr2)
    {
        cout << x << " ";
    };

    return 0;
}