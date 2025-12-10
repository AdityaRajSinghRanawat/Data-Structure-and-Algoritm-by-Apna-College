#include <iostream>

using namespace std;

// gcd(a, b) = gcd(a-b, b) if a > b
// gcd(a, b) = gcd(a, b-a) if b > a

// gcd(20, 28) = gcd(8, 20) = gcd(8, 12) = gcd(4, 8) = gcd(4, 4) = gcd(4, 0) = 4
int euclidGCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}

// optimized version of Euclid's Algorithm
// gcd(a, b) = gcd(a % b, b) if a > b
// gcd(a, b) = gcd(a, b % a) if b > a

// gcd(20, 28) = gcd(20, 8) = gcd(4, 8) = gcd(4, 0) = 4

int modifiedEuclidGCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}

// recussive approach
int recusrsiveEuclidGCD(int a, int b)
{
    // if b gets 0 due to being smaller
    if (b == 0)
    {
        return a;
    }
    else
    {
        // assume a > b
        return recusrsiveEuclidGCD(b, a % b);
        // if our assumption is false then also algo swap the values
        // 20, 28 => 28, 20
        // it also tries to put the smaller value second place (inside if-block)
    }
}

int main()
{
    int a, b;

    cout << "enter two numbers" << endl;
    cin >> a >> b;

    cout << euclidGCD(a, b) << endl;
    cout << modifiedEuclidGCD(a, b) << endl;
    cout << recusrsiveEuclidGCD(a, b) << endl;

    return 0;
}