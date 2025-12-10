#include <iostream>
using namespace std;


int binaryToDecimal(int binary){

    int ans = 0, remainder = 0, pow = 1; // 2^0
    
    // e.g. 110
    // I want the last number so I will get remainder with modulo 10
    // then I will devide this number with 10 to remove last digit
    // and i will repeat this process 

    while(binary > 0){ // because we are removing items from last [right to left] 
        remainder = binary % 2;
        ans += remainder * pow;
        
        binary /= 10;
        pow *= 2;
    }

    return ans;
}



int main()
{

    /*
        Binary to Decimal:-
        Repeated multiplication with 2



        e.g.
        <------------
        11010

        [1 X (2^4)] + [1 X (2^3)] + [0 X (2^2)] + [1 X (2^1)] + [0 X (2^0)]
        16 + 8 + 0 + 2 + 0
        26



        e.g.
        <------------
        10010

        [1 X (2^4)] + [1 X (2^3)] + [0 X (2^2)] + [1 X (2^1)] + [0 X (2^0)]
        16 + 0 + 0 + 2 + 0
        18
    
    */


    cout << binaryToDecimal(0) << endl;
    cout << binaryToDecimal(01) << endl;
    cout << binaryToDecimal(10) << endl;
    cout << binaryToDecimal(11) << endl;
    cout << binaryToDecimal(10101) << endl;
    cout << binaryToDecimal(11110) << endl;
    cout << binaryToDecimal(111101111) << endl;


    return 0;
}