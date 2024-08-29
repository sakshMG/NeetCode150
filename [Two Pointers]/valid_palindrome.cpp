#include <cctype>
#include <string>

using namespace std; 

class Solution {
    public:
        bool isPalindrom(string s) {

            int l = 0;
            int r = s.size() - 1; 

            while(r > l) {

                while (!isalnum(s[r])) {
                    r--; 
                }

                while (!isalnum(s[l])) {
                    l++; 
                }

                if (tolower(s[r]) != tolower(s[l])) {
                    return false;
                }

                r--;
                l++;
            }

            return true; 
        }
};
