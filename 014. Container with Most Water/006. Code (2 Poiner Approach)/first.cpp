#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        while(lp < rp)

        Because if lp = rp that mean no container
        and we do not want lp > rp    
    */
   class Solution {
    public:
        int maxArea(vector<int>& height) {
            int maxWater = 0;
            int lp = 0, rp = height.size() - 1;
    
            while(lp < rp){
                int w = rp - lp;
                int ht = min(height[lp], height[rp]);
                int currentWater = w * ht;
    
                maxWater = max(maxWater, currentWater);
    
                height[lp] <height[rp] ? lp++ : rp--;
            }
    
            return maxWater;
        }
    };
    return 0;
}