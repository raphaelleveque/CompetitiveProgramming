class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x {};
        for (auto s : operations) {
            if (s == "X++" || s == "++X")
                x++;
            else
                x--;
        }
        return x;
    }
};
