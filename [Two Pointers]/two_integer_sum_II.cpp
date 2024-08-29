#include <vector> 

using namespace std; 

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int l = 0;
        int r = numbers.size() - 1;

        while (true) {

            int value = numbers[l] + numbers[r]; 

            if (value == target) {
                // Next time just use return {l + 1, r + 1}; 
                vector<int> result; 
                result.push_back(l + 1); 
                result.push_back(r + 1); 
                return result; 
            }


            if (value < target) {
                l++; 
            }

            if (value > target) {
                r--; 
            }
        }
       
    }
};

