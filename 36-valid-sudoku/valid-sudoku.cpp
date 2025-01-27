

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            unordered_set<char> rows, cols, boxes;
            for (int j = 0; j < 9; ++j) {
                // Check rows
                if (board[i][j] != '.' && rows.count(board[i][j])) return false;
                rows.insert(board[i][j]);

                // Check columns
                if (board[j][i] != '.' && cols.count(board[j][i])) return false;
                cols.insert(board[j][i]);

                // Check 3x3 boxes
                int boxRow = 3 * (i / 3) + j / 3;
                int boxCol = 3 * (i % 3) + j % 3;
                if (board[boxRow][boxCol] != '.' && boxes.count(board[boxRow][boxCol])) return false;
                boxes.insert(board[boxRow][boxCol]);
            }
        }
        return true;
    }
};