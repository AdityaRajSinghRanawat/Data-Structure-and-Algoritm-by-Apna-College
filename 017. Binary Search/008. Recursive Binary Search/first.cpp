#include <iostream>
using namespace std;

int main()
{
    /*
        Recursive Binary Search:-

        We can use binary search in recursive way.
        - Binary search is a divide and conquer algorithm.
        - Recursive code is shorter.
        - Recursion makes it easy to prove correctness using induction
        (commonly used in algorithms analysis).

        example:-

        arr = [-1, 0, 3, 5, 9, 12]
        target = 0

        main function: 
        st = 0, end = 5
        
        level 1:    
        st = 0, end = 5, mid = 2 // get mid (from level 2) and return (to main function)
        
        level 2:    
        st = 0, end = 1, mid = 0 // get mid (from level 3) and return (to level 1)
        
        level 3:    
        st = 1, end = 1, mid = 1 // return mid to upper level (level 2)

        Time Complexity:-
        O(log n)
    */

    /*
        Iterative vs Recursive Binary Search:-

        Iterative binary search is better 
        since it is easier to implement and
        there is formation of call stack in 
        recursive binary search.

        Iterative:-
        Space Complexity: O(1)
        Time Complexity: O(log n)

        Recursive:-
        Space Complexity: O(log n)
        Time Complexity: O(log n)

        Therefore the space complexity is good in 
        interative binary search.
    */
    return 0;
}