class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &line : image) {
            vector<int> reverse(rbegin(line), rend(line));
            transform(reverse.begin(), reverse.end(), line.begin(), 
                      [](int x){return !x;});
        }
        return image;
    }
};
