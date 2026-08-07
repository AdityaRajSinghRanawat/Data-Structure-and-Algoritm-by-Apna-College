#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            cout << "Found " << target << " at index: " << i << endl;
            return i;
        }
    }
    cout << "Not Found : -1" << endl;
    return -1;
}

int main()
{
    /*
        # Linear Search:-
        arr[] = {2, 3, 10, 24, 1, 5} || target = 1 || size = 6

        ---------------------------
        | 2 | 3 | 10 | 24 | 1 | 5 |  
        ---------------------------
        . 0   1   2    3    4   5 
        
        Return:-
        when found = index
        when not found = -1
    */

    int arr[] = {2, 3, 10, 24, 1, 5};
    int target = 21;
    int size = sizeof(arr) / sizeof(int);

    cout << linearSearch(arr, size, target) << endl;

    /*
        Time Complexity 
        
        Linear Search:-
        O(n) = Linear Complexity
        
        Binary Search:-
        O(log n) = Logarithmic Complexity
    */
    return 0;
}