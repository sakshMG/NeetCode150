#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> num_freq; 

        for (int i : nums) {
            num_freq[i] += 1; 
        }

        vector<vector<int>> values(10100);

        for (const auto& pair: num_freq) {
            values[pair.second].push_back(pair.first);
        }

        vector<int> result; 

        for (int i = nums.size(); i >= 0; i--) {
            
           if (values[i].size() == 0) {
               continue;
           } 

           // Potential bug as k can be less than 0 after this for
           // for loops is run
           
           for (auto& number: values[i]) {
               k -= 1; 
               result.push_back(number);
           }

           if (k == 0) {
               return result; 
           }
        }
        return result; 

    }
};

