#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> key_s; 

       for (auto s: strs) {
         
           vector<int> count(26,0);
           for (auto c: s) {
               count[c - 'a']++;
           }

           string key = "";

           for (int i: count) {
               key += "#" + to_string(i);
           }
           key_s[key].push_back(s);

       }
       vector<vector<string>> final_list;
       for (auto& a: key_s) {

           final_list.push_back(a.second);
       }
       return final_list;

    }
};

/* I have a list of strings
 * I want to assign a key to each string
 * Then this gets stored in a map 
 * I can then loop throgh the map
 */
