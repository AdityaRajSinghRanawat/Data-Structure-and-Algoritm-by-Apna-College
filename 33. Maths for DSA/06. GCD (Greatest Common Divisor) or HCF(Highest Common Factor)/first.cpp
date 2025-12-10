#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int gcd = 1;

    // a = 0, b = 12 => gcd = 12
    if (a == 0 || b == 0)
    {
        return max(a, b);
    }

    // a = 12, b = 12 => gcd = 12
    if (a == b)
    {
        return a;
    }

    // Time Complexity: O(min(a, b)) // since loop runs from 1 to min(a, b)
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int main()
{
    int a, b;

    cout << "enter two numbers" << endl;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}