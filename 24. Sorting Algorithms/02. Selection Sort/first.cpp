#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n){ // O(n^2)
    // dividing array in sorted and unsorted
    for(int i = 0; i < n - 1; i++){ 
        int smallestIndex = i;
        // find smallest
        for(int j = i + 1; j < n; j++){ 
            if(arr[j] < arr[smallestIndex]){
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

    for(int x: arr){
        cout << x << " ";
    };
    
    return 0;
}