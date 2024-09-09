#include <vector>

using namespace std; 

class Solution {
    public: 
        vector<vector<int>> threeSum(vector<int>& nums) {

            vector<vector<int>> result; 

            sort(nums.begin(), nums.end());

            for (int i = 0; i < nums.size(); i++) {
                
                if (nums[i] > 0) break; 
                if (i > 0 && nums[i] == nums[i - 1]) continue;

                int l = i + 1;
                int r = nums.size() - 1; 

                while (l < r) {
                    int value = nums[i] + nums[l] + nums[r];

                    if (value == 0) {
                        
                        result.push_back({nums[i], nums[l], nums[r]});
                        l++;
                        r--;
                        
                        while (l < r && nums[l] == nums[l - 1]) {
                            l++; 
                        }
                        
                    } else if (value < 0) {
                        l++;
                    } else if (value > 0) {
                        r--;
                    }
                }
            }

            return result;
        }
};
