#include <vector> 

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // One method is to do a product of the whole array
        // then iterate over the array again and divide by the number 
        // and add it to the output vector
        //
        //
        // Another is potentially using a hash map?
        // for nums with the same number they will have the same result
        // revist this option 
        //
        //

        vector<int> result(nums.size(), 1);

        int preMultiple = 1; 
        for (int i = 0; i < nums.size(); i++) {
            result[i] = preMultiple;
            preMultiple *= nums[i];
        }

        int postMultiple = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] *= postMultiple; 
            postMultiple *= nums[i]; 
            





        }
        return result; 
    }
};

