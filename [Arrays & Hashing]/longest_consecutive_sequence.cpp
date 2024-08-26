#include <unordered_map>
#include <unordered_set>
#include <vector> 

using namespace std; 

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> values(nums.begin(),nums.end()); 

        // Removed cause above is cleaner
        // for (auto num: nums) {
        //     values.insert(num);
        // }
        
        // Has to be 0 not 1 in case the input list is empty 
        int longest_len = 0;
        
        for (int num: values) {

            // Finds the smallest value in the sequence
            if (values.find(num - 1) != values.end()) continue; 

            int sequence_len = 1; 


            while (values.find(num + 1) != values.end()) {
                sequence_len++;
                num++; 
            }
            
            longest_len = max(longest_len, sequence_len); 

        }

        return longest_len;

        
    }
};

