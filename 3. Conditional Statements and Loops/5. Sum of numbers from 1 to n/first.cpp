#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter a number : " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout << "the sum of first " << n << " numbers is " << sum << endl;
    return 0;
}