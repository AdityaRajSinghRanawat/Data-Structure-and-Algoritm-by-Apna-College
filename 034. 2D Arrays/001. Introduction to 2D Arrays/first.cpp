#include <iostream>
using namespace std;

int main()
{
    // rows, columns = 4, 3 = [4][3]
    int rows = 4;
    int cols = 3;

    // Array Declaration
    int arr1[4][3];

    // Array Initialization
    int arr2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    // Note:- Individual Row is treated as individual Array
    // {1, 2, 3}    -> arrP
    // {4, 5, 6}    -> arrQ
    // {7, 8, 9}    -> arrR
    // {10, 11, 12} -> arrS

    return 0;
}