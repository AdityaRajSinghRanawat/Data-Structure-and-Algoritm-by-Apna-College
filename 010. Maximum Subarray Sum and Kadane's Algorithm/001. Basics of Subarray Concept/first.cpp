#include <iostream>
using namespace std;

int main()
{
    /*
        [1, 2, 3, 4, 5]

        subarray:-
        1, 2, 3, 4, 5
        12, 23, 34, 45
        123, 234, 345
        1234, 2345
        12345

        # Total Subarray (Mathematical Formula):-

        subarray = { n * (n + 1) } / 2

        n = number of elements in the array.

        e.g. n = 5
        subarray = { 5 * (5 + 1) } / 2 = 15
    */

    /*
        Since we know that vector is a contiguous memory allocation,
        i.e. if we know start and end of the vector,
        we can easily find the subarray.

        e.g.
        [1, 2, 3, 4, 5]
        .   ^     ^
        .   |     |
        .  start  end

        subarray = [2, 3, 4]
    */

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i < end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}