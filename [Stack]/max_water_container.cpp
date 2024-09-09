#include <vector>

using namespace std; 
    
class Solution {
public:
    int maxArea(vector<int>& heights) {

        int l = 0;
        int r = heights.size() - 1; 

        int result = 0; 
        int volume = 0;

        while (l < r) {

            volume = (r - l) * min(heights[l],heights[r]); 
            result = max(result, volume); 

            if (heights[l] < heights[r]) {
                l++;
            } else {
                r--;
            }

        }


        
        return result;     
        
    }
};

