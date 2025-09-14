#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        [ 2 | 1 | 3 | 4]

        mid = 5
        st = 1, pages = 2 + 1 = 3
        st = 2, pages = 3
        st = 3, pages = 4

        if (no of stu > m) return invalid
    */
    /*
        bool isValid (arr[], n, m, mid){

            int stu = 1, pages = 0

            for(i = 0; i < n; i++){
                if(pages + arr[i] <= allowedPages){
                    pages += arr[i];
                }
                else{
                    stu++;
                    pages = arr[i];
                }
            }

            if(stu > m){ // invalid
                return false;
            }

            else if(stu <= m){ // valid
                return true;
            }
        }
    */

    /*
        We will extra edge case:-
        [10 | 20 | 30]

        maxAllowedPage = 5

        which is not possible 

        so:-

        for(i = 0; i < n; i++){
            -----------------------------------
            if(arr[i] > maxAllowedPage){
                return false;
            }
            -----------------------------------
            if(){
            
            }else{
            
            }
        }
    */
    return 0;
}