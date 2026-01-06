#include <iostream>
using namespace std;

// recusrive function (since it calls itself again and again)
void printNums(int n)
{
    if (n == 1)
    {
        cout << n << endl;
        return;
    }
    cout << n << " ";
    printNums(n - 1);
}

int main()
{
    /*
        If we want to print n to 1:

        e.g.
        n = 4 (i.e. 4 to 1)
        we do not need to worry about how to print (4 to 1),
        we just need to solve the small problem that to print 4.
        i.e
        [ 4 3 2 1 ]  = print 4             | ^
        [ 3 2 1 ]    = print 3             | |
        [ 2 1 ]      = print 2             | |   (return, call up) [backtracking]
        [ 1 ]        = print 1 {base case} v |
    */

    printNums(4);
    printNums(30);

    return 0;
}