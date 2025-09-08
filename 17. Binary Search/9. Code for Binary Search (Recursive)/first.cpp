#include <iostream>
#include <vector>
using namespace std;


int recBinarySearch(vector<int> arr, int tar, int st, int end) {
    if(st <= end){
        int mid = st + (end -st)/2 ;

        if(tar > arr[mid]){
            return recBinarySearch(arr, tar, mid+1, end); // 2nd half
        }
        else if(tar < arr[mid]){
            return recBinarySearch(arr, tar, st, mid-1); // 1st half
        }
        else{
            return mid;
        }
    }
    return -1;
}


int main()
{
    vector<int> arr1 = {-1, 0, 3, 5, 9, 12}; // even
    int tar1 = 0;
    int st1 = 0;
    int end1 = arr1.size();

    cout << recBinarySearch(arr1, tar1, st1, end1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9}; // odd
    int tar2 = 5;
    int st2 = 0;
    int end2 = arr2.size();

    cout << recBinarySearch(arr2, tar2, st2, end2) << endl;

    vector<int> arr3 = {1, 2, 3, 4, 5}; // odd
    int tar3 = 30;
    int st3 = 0;
    int end3 = arr3.size();

    cout << recBinarySearch(arr3, tar3, st3, end3) << endl;
    return 0;
}