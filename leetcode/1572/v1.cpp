class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum{};
        for (int i{}, j{}; i < mat.size(); i++, j++) {
            sum += mat[i][j] + mat[i][mat.size() - 1 - j];
        }
        if (mat.size() % 2 == 1) {
            sum -= mat[mat.size() / 2 ][mat.size() / 2];
        }
        return sum;
    }
};
