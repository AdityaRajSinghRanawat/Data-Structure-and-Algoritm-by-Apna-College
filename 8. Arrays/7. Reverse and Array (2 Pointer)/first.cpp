#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    /*
        # Reverse an Array:-
        arr[] = {12, 34, 45, 9, 8}

        reverse= 8, 9, 45, 34, 12
        - do not make a dublicate array
        - make changes to original array

        So we will use 2 pointer approach to reverse the array.
    */

    // TWO POINTER APPROACH:-
    /*
        ---------------------------
        | 2 | 3 | 10 | 24 | 1 | 5 |  
        ---------------------------
        . ^                     ^ 
        . |a                   b|
        .           swap

        ---------------------------
        | 5 | 1 | 10 | 24 | 3 | 2 |  
        ---------------------------
        .          ^    ^ 
        .         a|    |b
        .           swap

        FINALLY:-
        ---------------------------
        | 5 | 1 | 24 | 10 | 3 | 2 |  
        ---------------------------
    */
    
    /*
        -------------------------------
        |    |    |    |    |    |    |  
        -------------------------------
        .  ^                        ^
        .  |START                END|



        STOP WHEN in:-

        - EVEN:- (START > END)
        ---------------------
        |    |    |    |    | 
        ---------------------
        .      ^     ^
        .   END|     |START

        - ODD:- (START = END)
        ----------------
        |    |    |    |
        ----------------
        .       ^
        . START | END

        COMBINED:-
        Stop swapping when START >= END
    */
    int arr[] = {12, 34, 45, 9, 8};
    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = size - 1;

    cout << "Before Reverse: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, start, end);

    cout << "After Reverse: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    /*
        Time Complexity:- O(n)
    */
    return 0;
}