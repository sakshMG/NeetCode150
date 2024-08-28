#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std; 
class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {

            unordered_map<int, unordered_set<char>> row;
            unordered_map<int, unordered_set<char>> col;
            unordered_map<int, unordered_set<char>> cell;

            for (int rowNum = 0; rowNum < 9; rowNum++) {
                for (int colNum = 0; colNum < 9; colNum++) {

                    char& value = board[rowNum][colNum]; 

                    if (value =='.') continue;

                    int cellValue = colNum / 3 + (rowNum / 3) * 3;

                    if (row[rowNum].count(value) || col[colNum].count(value) || cell[cellValue].count(value) ) {
                        return false; 
                    }
                    
                    row[rowNum].insert(value); 
                    col[colNum].insert(value);
                    cell[cellValue].insert(value);
                }
            }

            return true;
        }
};


