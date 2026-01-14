#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Time Complexity: O(n^2)

    vector<int> arr = {6, 3, 5, 2, 7};
    int inversionCount = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                inversionCount++;
            }
        }
    }

    cout << "Number of Inversions: " << inversionCount << endl;

    return 0;
}