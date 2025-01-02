#include <iostream>
using namespace std;



// function defination
void dontGiveAnything(){
    cout << "hello\n";
}

int returnSometing(){
    cout << "hello from returnSomething\n";
    return 3;
}


int sum(int x, int y){
    int sum = x + y;
    cout << sum << "\n";
    return 0;
}

int returnSum(int x, int y){
    int sum = x + y;
    return sum;
}



int minOfTwo(int p, int q){
    if(p < q){
        return p;
    } else {
        return q;
    }
}

int sum1ToN(int num){
    int sum = 0;
    for(int i = 1; i <= num; i++){
        sum += i;
    }
    return sum;
}

int nFactorial(int num){
    int product = 1;
    for(int i = 1; i <= num; i++){
        product *= i;
    }
    return product;

}
int main()
{
    /*
        returnType functionName() {
            // code

            return value;
        }
    */

    int a = 10;
    int b = 5;

    // function calling/invoke
    dontGiveAnything();
    dontGiveAnything();
    dontGiveAnything();


    int val = returnSometing(); // function will work and return will also be stored in val
    cout << val << endl;

    // parameters int x, int y (copy of arguments)
    // arguments 2, 4 (actual values passed to a function)
    sum(2, 4); 
    sum(27, 43);

    // return function
    cout << returnSum(50, 10) << endl;



    // min of 2 nums
    cout << minOfTwo(12, 45) << endl;


    

    // the numbers or character that do not change in programme is known as literals 
    // eg: 1, 10, 15...... 'a', 'b', ..... 'A', 'C', ....


    // sum of 1 to n
    cout << sum1ToN(100) << endl;


    // n factorial
    cout << nFactorial(5) << endl;  // int is small so greater values will result in 0 

    return 0;
}



