#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        It will give TLE because n is till 10^5
        and our code 
        time complexity is O(n^2)
        
        n = 10^5
        n^2 = 10^10

        and TLE id for 10^8 operations

        we need to optimize our code to O(n) or O(n logn) time complexity
    */

    class Solution
    {
    public:
        int maxArea(vector<int> &height)
        {
            int maxWater = 0;

            for (int i = 0; i < height.size(); i++)
            {
                for (int j = i + 1; j < height.size(); j++)
                {
                    int width = j - i;
                    int ht = min(height[i], height[j]);

                    int currentWater = width * ht;

                    maxWater = max(maxWater, currentWater);
                }
            }

            return maxWater;
        }
    };

    return 0;
}