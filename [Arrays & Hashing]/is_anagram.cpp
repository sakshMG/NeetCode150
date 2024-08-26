#include <iostream> 
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> s_string;       
        unordered_map<char, int> t_string;

        for (int i = 0; i < s.size(); i++) {
            s_string[s[i]]++;
            t_string[t[i]]++;
        }

                 
        for (int i = 0; i < s.size(); i++) {
            if(s_string[s[i]] != t_string[s[i]]) {
                return false;
            }
        }

        return true;   
    }

};
