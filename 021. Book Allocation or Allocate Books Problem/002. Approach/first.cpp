#include <iostream>
using namespace std;

int main()
{
    /*

        arr = [2 | 1 | 3 | 4]

        Case 1:
        [ [2] | [ 1 | 3 | 4] ]
        S1 = 2, S2 = 8, max(S1, S2) = 8
        
        Case 2:
        [ [2 | 1] | [ 3 | 4] ]
        S1 = 3, S2 = 7, max(S1, S2) = 7

        Case 3:
        [ [2 | 1 | 3] | [ 4] ]
        S1 = 6, S2 = 4, max(S1, S2) = 6 <---- ans (this is minimum) 

        If we try to find max pages allocated to all
        students in single array, 
        
        then we know that almost every student got
        less then that number of pages,

        and among these arrays with max individual pages,
        we need to find whose max is minimum.

        i.e. find min possible max pages
    */

    /*
        To convert this approach to binary search (since the pages are not sorted)
        we need to create the search line.
 
        eg. [2 | 1 | 3 | 4]
        sum = 2 + 1 + 3 + 4 = 10

        min = 0                   max = sum(all pages)
        [ 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 ]
        ^                     ^                      ^
        |                     |                      |
        st                   mid                    end

        we will create a function which will check if
        the mid is valid or not.

        5 
        -> valid -> move left
        -> invalid -> move right

        e.g.
        [2 | 1 | 3 | 4]
        mid = 5
        arrangement = [2 | 1] [3] [4]
        students = 3
        return (invalid)

        [0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10]
        ^                    ^                     ^
        |                    |                     |
        st                  mid                  end

        so we definately need to increase the max pages

        move right, discard left

        [0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10]
        .                        ^       ^         ^
        .                        |       |         |
        .                        st     mid      end

        mid = 8
        arrangement = [2 | 1 | 3] [4]
        students = 2
        return (valid)

        but for better answer we will move left
        but we will store the answer

        [0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10]
        .                        ^   ^
        .                        |   |
        .                       st  mid=end

        mid = 7
        arrangement = [2 | 1 | 3] [4]
        students = 2
        return (valid)

        now update the stored ans with this new ans
        move left

        [0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10]
        .                        ^ 
        .                        | 
        .                    st=mid=end

        mid = 6
        arrangement = [2 | 1 | 3] [4]
        students = 2
        return (valid)

        now update the stored ans with this new ans
        exit and return the ans (since st==end)
    */

    /*
        e.g 
        [2 | 1 | 3 | 4]
        mid = 5
        students required = 2

        we can allocate books in this way
        [2 | 1] [3] [4]
        students = 3 > 2 (invalid)
        if we try to allocate then the number of students
        will be 3, but we need 2.

        we need less students
        so we will increase the max pages

        e.g.
        [2 | 1 | 3 | 4]
        mid = 5
        students required = 4

        [2 | 1] [3] [4]
        students = 3 < 4 (valid)
        we need more students
        so we will decrease the max pages        
        
        valid -> move left
    */
    return 0;
}