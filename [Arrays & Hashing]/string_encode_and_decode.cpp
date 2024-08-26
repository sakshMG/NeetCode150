#include <string>
#include <vector>

using namespace std; 

class Solution {
    public:
        
    string encode(vector<string>& strs) {
        string encoded_string = ""; 
        
        for (auto s: strs) {
            encoded_string += to_string(s.size()) + "#" + s; 
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string; 

        // Traverse the full string 
        // Stop at the delimeter 
        // Read the number length and split the string accordingly
        // 4#neet4#code6#ishita 
        // 012345678

        int j = 0; 

        for (int i = 0; i < s.size(); i++) {

            if(s[i] == '#') {
                int string_len = stoi(s.substr(i-j, j));

                string value = s.substr(i + 1, string_len);

                decoded_string.push_back(value);

                i += string_len; 


                j = 0; 
                continue;
            }

            j++; 

        }
        return decoded_string;

        
    }

        
};
