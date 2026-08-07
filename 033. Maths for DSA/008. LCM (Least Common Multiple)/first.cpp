#include <iostream>

using namespace std;

int gcdRecursion(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    // assume a > b
    else
    {
        return gcdRecursion(b, a % b);
    }
}

int lcm(int a, int b)
{
    // a * b = gcd(a, b) * lcm(a, b)
    // so,
    // lcm(a, b) = (a * b) / gcd(a, b)
    int gcd = gcdRecursion(a, b);
    return (a * b) / gcd;
}

int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;

    cout << lcm(a, b) << endl;

    return 0;
}