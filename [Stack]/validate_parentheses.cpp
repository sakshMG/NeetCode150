#include <stack>
#include <string>

using namespace std; 


class Solution {
public:
    bool isValid(string s) {

        stack<char> brack; 

        for (char& c: s) {

            if (c == '(' || c == '{' || c == '[') {
                brack.push(c);
                continue;
            } 

            if (c == ')') {

                if (brack.size() == 0) return false;
                if (brack.top() != '(') return false; 
                brack.pop(); 
            }

            if (c == '}') {

                if (brack.size() == 0) return false;
                if (brack.top() != '{') return false; 
                brack.pop(); 
            }

            if (c == ']') {

                if (brack.size() == 0) return false;
                if (brack.top() != '[') return false; 
                brack.pop(); 
            }

            // char top = brack.top(); 
            // brack.pop();

        }

        if (brack.size() != 0) return false; 

        return true;
    }
        


};
