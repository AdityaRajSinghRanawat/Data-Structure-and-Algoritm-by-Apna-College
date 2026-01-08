#include <iostream>
#include <vector>
using namespace std;

// we used pass by reference because we want to change the ans vector
// not its copy which will be created and deleted in every recursive call
void printSubsets(vector<int> &arr, vector<int> &ans, int i)
{
    if (i == arr.size())
    {
        cout << "[";
        for (int val : ans)
        {
            cout << " " << val << " ";
        }
        cout << "]";

        cout << endl;
        return;
    }

    // include:
    ans.push_back(arr[i]);

    printSubsets(arr, ans, i + 1);

    // backtracking:
    // we trust in above resursive call that we belive
    // that it cleared all last elements from the ans vector
    // thats why we are popping back assuming we are on last element
    ans.pop_back();

    // exclude:
    printSubsets(arr, ans, i + 1);
}

int main()
{
    // Time Complexity: O(2^n)
    // Space Complexity: O(n)

    /*
        .             arr = [1]
        .             /       \
        . [1] (include)        [] (exclude)


        arr = {1, 2, 3}

        .                               {(1),2,3}[]                        ---> i = 0
        .                              /           \
        .                  {1,(2),3}[1]             {1,(2),3}[]            ---> i = 1
        .                  /   \                          /   \
        .    {1,2,(3)}[1,2]    {1,2,(3)}[1]   {1,2,(3)}[2]    {1,2,(3)}[]  ---> i = 2
        .       /     \          /      \        /      \      /      \
        .   [1,2,3]  [1,2]    [1,3]     [1]   [2,3]     [2]   [3]     []   ---> i = 3

        when, i = size of arr = covered all index
        then, stop

        add set in "ans" when including, 
        then add set in "ans" when backtracking and calling exclude recursive call
    */

    /*
        Time Complexity:

        Total calls = total subsets = 2

        TC = Total calls * Work done in each call
        TC = ((2)^n - 1) * k
        TC = ((2)^n - 1)
        TC = O((2)^n)
    */

    /*
        Space Complexity:

        SC = Depth of Recursion Tree * Memory in each call
        SC = n * k
        SC = O(n)
    */
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // store subsets    

    printSubsets(arr, ans, 0);

    return 0;
}