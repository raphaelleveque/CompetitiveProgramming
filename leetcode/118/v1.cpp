class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows <= 0)
            return {{}};
        if (numRows == 1)
            return {{1}};
        vector<vector<int>> pascal(numRows);
        pascal.at(0) = {1};
        pascal.at(1) = {1, 1};
        for (int linha = 2; linha < numRows; linha++) {
            int iter1 = 0, iter2 = 1, iterRes = 1;
            pascal.at(linha).resize(linha+1);
            pascal.at(linha).at(0) = pascal.at(linha).at(linha) = 1;
            while (iterRes < linha) {
                pascal.at(linha).at(iterRes++) = pascal[linha - 1][iter1++] + pascal[linha - 1][iter2++];
            }
        }
        return pascal;
    }
};