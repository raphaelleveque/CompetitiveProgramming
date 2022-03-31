class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum {};
        for (auto &g : grid) {
            // The count function counts how many times a number appears in the list
            // Calling it with a lambda function, it will only count if
            // the lambda expression returns true
            sum += count_if(g.begin(), g.end(), 
                                    [](int x) { return x < 0; });
        }
        return sum;
    }
};
