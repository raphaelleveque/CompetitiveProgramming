#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool verifySquare(vector<vector<char>>& board, int i, int j) {
        int rowLimit = i + 3;
        int columnLimit = j + 3;
        int savingJ = j;
        unordered_set<char> map;
        for (; i < rowLimit; i++) {
            for (j = savingJ; j < columnLimit; j++) {
                if (board[i][j] == '.') continue;
                if (map.find(board[i][j]) != map.end()) return false;
                map.insert(board[i][j]);
            }
        }
        return true;
    }

    bool verifyRowAndColumn(vector<vector<char>>& board, int i, int j) {
        // row 
        for (int k = 0; k < 9; k++) {
            if (k != i && board[k][j] == board[i][j]) return false;
        }

        for (int k = 0; k < 9; k++) {
            if (k != j && board[i][k] == board[i][j]) return false;
        }
        return true;
    }

public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i ++) {
            for (int j = 0; j < 9; j ++) {
                if (i % 3 == 0 && j % 3 == 0) {
                    if (!verifySquare(board, i, j)) return false;
                }
                if (board[i][j] == '.') continue;
                if (!verifyRowAndColumn(board, i, j)) return false;
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    std::vector<std::vector<char>> board = {
            {'.', '.', '.', '.', '5', '.', '.', '1', '.'},
            {'.', '4', '.', '3', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '3', '.', '.', '1'},
            {'8', '.', '.', '.', '.', '.', '.', '2', '.'},
            {'.', '.', '2', '.', '7', '.', '.', '.', '.'},
            {'.', '1', '5', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '2', '.', '.', '.'},
            {'.', '2', '.', '9', '.', '.', '.', '.', '.'},
            {'.', '.', '4', '.', '.', '.', '.', '.', '.'}
    };
    cout << s.isValidSudoku(board) << endl;


}