#include <iostream>
using namespace std;


int decimalToBinary(int decimal){
    int ans = 0, pow = 1, remainder = 0;

    // since we know that we will divide the number and add it to ans
    // but we need to add it in reverse order, so we will use below format
    // 1110 = [1 X (1000)] + [1 X (100)] + [1 X 10] + [0 X 1]

    while(decimal > 0){
        remainder = decimal % 2;
        decimal /= 2;

        ans += (remainder * pow);

        pow *= 10;
    }

    return ans;

}


int main()
{
    /*
        Decimal to Binary:-
        Repeated division with 2



        e.g. 42

        2 | 42   
        --------
        2 | 21   0   ^       
        --------     |
        2 | 10   1   |   
        --------     |
        2 | 5    0   |       (42)     =  (101010)
        --------     |           10              2
        2 | 2    1   |
        --------     |
        2 | 1    0   |
        --------     |
        . | 0    1   |



        e.g. 50

        2 | 50   
        --------
        2 | 25   0   ^       
        --------     |
        2 | 12   1   |   
        --------     |
        2 | 6    0   |       (50)     =  (110010)
        --------     |           10              2
        2 | 3    0   |
        --------     |
        2 | 1    1   |
        --------     |
        . | 0    1   |
        
    */


    cout << decimalToBinary(42) << endl;
    cout << decimalToBinary(50) << endl;
    cout << decimalToBinary(64) << endl;
    cout << decimalToBinary(128) << endl;
    cout << decimalToBinary(129) << endl;
    cout << decimalToBinary(173) << endl;

    cout << "\nLets Print numbers from 0 to 9" << endl;

    for(int i = 0; i <= 9; i++){
        cout << i << " = " << decimalToBinary(i) << endl;
    }


    
    return 0;
}