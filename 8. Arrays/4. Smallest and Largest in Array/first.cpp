#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

int main()
{
    /*
        #include <climits> // for INT_MAX and INT_MIN

        climits = C language limits

        + infinity = INT_MAX
        - infinity = INT_MIN
    */

    int nums[5] = {10, 9, 33, -24, 52};

    // SMALLEST:-
    /*
        int numbers = {10, 9, 33, -24, 52};
        int smallest = +infinity => 10 => 9 => -24
    */

    int smallest = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
    cout << "smallest: " << smallest << endl;

    // LARGEST:-
    /*
        int numbers = {10, 9, 33, -24, 52};
        int largest = -infinity => 10 => 33 => 52
    */

    int largest = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    cout << "largest: " << largest << endl;

    // OR

    /*
        min(num1, num2) => return smallest number
        max(num1, num2) => return largest number
    */

    // SMALLEST:-
    int small = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        small = min(small, nums[i]);
    }

    cout << "smallest: " << small << endl;

    // LARGEST:-
    int large = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        large = max(large, nums[i]);
    }

    cout << "largest: " << large << endl;

    // Mixed:-
    int sm = INT_MAX;
    int lg = INT_MIN;
    for(int i = 0; i < 5; i++)
    {
        sm = min(sm, nums[i]);
        lg = max(lg, nums[i]);
    }
    cout << "smallest: " << sm << endl;
    cout << "largest: " << lg << endl;

    // Index:-
    int indexSmallest;
    for(int i = 0; i < 5; i++)
    {
        if (nums[i] == smallest)
        {
            indexSmallest = i;
            break;
        }
    }
    int indexLargest;
    for(int i = 0; i < 5; i++)
    {
        if (nums[i] == largest)
        {
            indexLargest = i;
            break;
        }
    }
    cout << "index of smallest: " << indexSmallest << endl;
    cout << "index of largest: " << indexLargest << endl;
    return 0;
}